// formatAlternate.cpp

#include <fmt/core.h>
#include <iostream>
 
int main() {

    std::cout << '\n';

    std::cout << fmt::format("{:#015}", 0x78) << '\n';
    std::cout << fmt::format("{:#015b}", 0x78) << '\n';
    std::cout << fmt::format("{:#015x}", 0x78) << '\n';

    std::cout << '\n';

    std::cout << fmt::format("{:g}", 120.0) << '\n';
    std::cout << fmt::format("{:#g}", 120.0) << '\n';


    std::cout << '\n';
   
}