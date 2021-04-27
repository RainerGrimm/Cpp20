// mainSOIF3.cpp

#include <iostream>

extern constinit int staticA;     

auto staticB = staticA;

int main() {
    
    std::cout << '\n';
    
    std::cout << "staticB: " << staticB << '\n';
    
    std::cout << '\n';
    
}