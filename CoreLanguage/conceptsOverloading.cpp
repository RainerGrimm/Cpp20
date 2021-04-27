// conceptsOverloading.cpp

#include <concepts>
#include <iostream>

void overload(auto t){
    std::cout << "auto : " << t << '\n';
}

void overload(std::integral auto t){
    std::cout << "Integral : " << t << '\n';
}

void overload(long t){
    std::cout << "long : " << t << '\n';
}

int main(){
    
    std::cout << '\n';

    overload(3.14);            
    overload(2010);            
    overload(2020L);            
    
    std::cout << '\n';
    
}