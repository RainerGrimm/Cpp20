// formatSign.cpp

#include <fmt/core.h>
#include <iostream>
 
int main() {

    std::cout << '\n';

    std::cout << std::format("{0:},{0:+},{0:-},{0: }", 0) << '\n';
    std::cout << std::format("{0:},{0:+},{0:-},{0: }", -0) << '\n';
    std::cout << std::format("{0:},{0:+},{0:-},{0: }", 1) << '\n';
    std::cout << std::format("{0:},{0:+},{0:-},{0: }", -1) << '\n';

    std::cout << '\n';
   
}