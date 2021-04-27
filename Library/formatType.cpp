// formatType.cpp

#include <fmt/core.h>
#include <iostream>

int main() {

    int num{2020};

    std::cout << "default:     " << fmt::format("{:}", num) << '\n';
    std::cout << "decimal:     " << fmt::format("{:d}", num) << '\n';
    std::cout << "binary:      " << fmt::format("{:b}", num) << '\n';
    std::cout << "octal:       " << fmt::format("{:o}", num) << '\n';
    std::cout << "hexadecimal: " << fmt::format("{:x}", num) << '\n';

}