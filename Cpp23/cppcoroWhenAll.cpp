// cppcoroWhenAll.cpp

#include <chrono>
#include <iostream>
#include <thread>

#include <cppcoro/sync_wait.hpp>
#include <cppcoro/task.hpp>
#include <cppcoro/when_all.hpp>

using namespace std::chrono_literals;

cppcoro::task<std::string> getFirst() {
    std::this_thread::sleep_for(1s);                       
    co_return "First";
}

cppcoro::task<std::string> getSecond() {
     std::this_thread::sleep_for(1s);                      
    co_return "Second";
}

cppcoro::task<std::string> getThird() {
     std::this_thread::sleep_for(1s);                     
    co_return "Third";
}


cppcoro::task<> runAll() {
                                                        
    auto[fir, sec, thi] = co_await cppcoro::when_all(getFirst(), getSecond(), getThird());
    
    std::cout << fir << " " << sec << " " << thi << '\n';
    
}

int main() {
    
    std::cout << '\n';
    
    auto start = std::chrono::steady_clock::now();
    
    cppcoro::sync_wait(runAll());                          // (1)
    
    std::cout << '\n';
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;   // (4)
    std::cout << "Execution time " << elapsed.count() << " seconds." << '\n';
    
    std::cout << '\n';

}