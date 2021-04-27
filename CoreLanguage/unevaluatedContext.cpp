// unevaluatedContext.cpp

#include <iostream>
#include <typeinfo>  // typeid

int add1(int, int);                       // declaration
int add2(int a, int b) { return a + b; }  // definition

int main() {

    std::cout << '\n';

    std::cout << "typeid(add1).name(): " << typeid(add1).name() << '\n'; 
    
    decltype(*add1) add = add2;                                               
    
    std::cout << "add(2000, 20): " << add(2000, 20) << '\n';
    
    std::cout << '\n';
    
}