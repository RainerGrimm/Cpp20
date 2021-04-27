// atomicRefCopy.cpp

#include <atomic>
#include <iostream>

int main() {
    
    std::cout << '\n';

    int val{5};
    int& ref = val;
    std::atomic<int> atomicRef(ref);
    ++atomicRef;
    std::cout << "ref: " << ref << '\n';
    std::cout << "atomicRef.load(): " << atomicRef.load() << '\n';
    
    std::cout << '\n';

}
