// threadSynchronizationConditionVariable.cpp

#include <iostream>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <vector>

std::mutex mut;
std::condition_variable condVar;

std::vector<int> myVec{};

void prepareWork() {                                       

    {
        std::lock_guard<std::mutex> lck(mut);
        myVec.insert(myVec.end(), {0, 1, 0, 3});           
    }
    std::cout << "Sender: Data prepared."  << '\n';
    condVar.notify_one();
}

void completeWork() {                                       

    std::cout << "Waiter: Waiting for data." << '\n';
    std::unique_lock<std::mutex> lck(mut);
    condVar.wait(lck, [] { return not myVec.empty(); });
    myVec[2] = 2;                                           
    std::cout << "Waiter: Complete the work." << '\n';
    for (auto i: myVec) std::cout << i << " ";
    std::cout << '\n';
    
}

int main() {

    std::cout << '\n';

    std::thread t1(prepareWork);
    std::thread t2(completeWork);

    t1.join();
    t2.join();

    std::cout << '\n';
  
}