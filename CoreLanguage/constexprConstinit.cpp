// constexprConstinit.cpp

#include <iostream>

constexpr int constexprVal = 1000;
constinit int constinitVal = 1000;

int incrementMe(int val){ return ++val;}

int main() {

    auto val = 1000;
    const auto res = incrementMe(val);                                                              
    std::cout << "res: " << res << '\n';
    
    // std::cout << "res: " << ++res << '\n';                     ERROR
    // std::cout << "++constexprVal: " << ++constexprVal << '\n'; ERROR
    std::cout << "++constinitVal: " << ++constinitVal << '\n';       

    constexpr auto localConstexpr = 1000;                                  
    // constinit auto localConstinit = 1000; ERROR
    
}