// formatFillAlign.cpp

#include <fmt/core.h>
#include <iostream>
 
int main() {

    std::cout << '\n';
    
    int num = 2020;

    std::cout << fmt::format("{:6}", num) << '\n'; 
    std::cout << fmt::format("{:6}", 'x') << '\n';   
    std::cout << fmt::format("{:*<6}", 'x') << '\n';
    std::cout << fmt::format("{:*>6}", 'x') << '\n';
    std::cout << fmt::format("{:*^6}", 'x') << '\n';
    std::cout << fmt::format("{:6d}", num) << '\n';
    std::cout << fmt::format("{:6}", true) << '\n';

    std::cout << '\n';
   
}