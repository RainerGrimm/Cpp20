// midpointLerp.cpp

#include <cmath>    
#include <numeric>   
#include <iostream>

int main() {

    std::cout << '\n';
    
    std::cout << "std::midpoint(10, 20): " << std::midpoint(10, 20) << '\n';
    
    std::cout << '\n';
    
    for (auto v: {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0}) {
        std::cout << "std::lerp(10, 20, " << v << "): " << std::lerp(10, 20, v) 
                  << '\n';
    }

    std::cout << '\n';

}