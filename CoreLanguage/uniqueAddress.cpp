// uniqueAddress.cpp

#include <iostream>
 
struct Empty {}; 
 
struct NoUniqueAddress {
    int d{};
    [[no_unique_address]] Empty e{};
};
 
struct UniqueAddress {
    int d{};
    Empty e{};                                    
};
 
int main() {

    std::cout << '\n';
    
    std::cout << std::boolalpha;

    std::cout << "sizeof(int) == sizeof(NoUniqueAddress): "              
              << (sizeof(int) == sizeof(NoUniqueAddress)) << '\n';
 
    std::cout << "sizeof(int) == sizeof(UniqueAddress): "                
              << (sizeof(int) == sizeof(UniqueAddress)) << '\n';
    
    std::cout << '\n';
    
    NoUniqueAddress NoUnique;
    
    std::cout << "&NoUnique.d: " <<  &NoUnique.d << '\n';           
    std::cout << "&NoUnique.e: " <<  &NoUnique.e << '\n';           
    
    std::cout << '\n';
    
    UniqueAddress unique;
    
    std::cout << "&unique.d: " <<  &unique.d << '\n';               
    std::cout << "&unique.e: " <<  &unique.e << '\n';              
    
    std::cout << '\n';

}