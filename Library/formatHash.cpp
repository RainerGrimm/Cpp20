// formatHash.cpp

#include <fmt/core.h>
#include <iostream>

int main() {

    std::cout << fmt::format("{:+06d}", 120) << '\n';
    std::cout << fmt::format("{:#0f}", 120) << '\n';
    std::cout << fmt::format("{:0>15f}", 120) << '\n';
    std::cout << fmt::format("{:#06x}", 0xa)  << '\n';

}
