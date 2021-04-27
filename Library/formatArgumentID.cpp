// formatArgumentID.cpp

#include <fmt/core.h>
#include <iostream>
#include <string>
 
int main() {
    
    std::cout << '\n';

    std::cout << fmt::format("{} {}: {}!\n", "Hello", "World", 2020);

    std::cout << fmt::format("{1} {0}: {2}!\n", "World", "Hello", 2020);

    std::cout << fmt::format("{0} {0} {1}: {2}!\n", "Hello", "World", 2020);

    std::cout << fmt::format("{0}: {2}!\n", "Hello", "World", 2020);
    
    std::cout << '\n';
   
}
