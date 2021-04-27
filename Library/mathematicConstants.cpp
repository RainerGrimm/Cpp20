// mathematicConstants.cpp

#include <iomanip>
#include <iostream>
#include <numbers>

int main() {
    
    std::cout << '\n';
    
    std::cout<< std::setprecision(10);
    
    std::cout << "std::numbers::e: " <<  std::numbers::e << '\n'; 
    std::cout << "std::numbers::log2e: " <<  std::numbers::log2e << '\n'; 
    std::cout << "std::numbers::log10e: " <<  std::numbers::log10e << '\n'; 
    std::cout << "std::numbers::pi: " <<  std::numbers::pi << '\n'; 
    std::cout << "std::numbers::inv_pi: " <<  std::numbers::inv_pi << '\n';
    std::cout << "std::numbers::inv_sqrtpi: " <<  std::numbers::inv_sqrtpi << '\n'; 
    std::cout << "std::numbers::ln2: " <<  std::numbers::ln2 << '\n'; 
    std::cout << "std::numbers::sqrt2: " <<  std::numbers::sqrt2 << '\n'; 
    std::cout << "std::numbers::sqrt3: " <<  std::numbers::sqrt3 << '\n'; 
    std::cout << "std::numbers::inv_sqrt3: " <<  std::numbers::inv_sqrt3 << '\n';
    std::cout << "std::numbers::egamma: " <<  std::numbers::egamma << '\n';
    std::cout << "std::numbers::phi: " <<  std::numbers::phi << '\n';
    
    std::cout << '\n';
    
}