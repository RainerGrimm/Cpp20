// unsafeComparison.cpp

#include <iostream>

int main() {

    std::cout << '\n';

    std::cout << std::boolalpha;

    int x = -3;                  
    unsigned int y = 7;         

    std::cout << "-3 < 7:  " << (x < y) << '\n';
    std::cout << "-3 <= 7: " << (x <= y) << '\n';
    std::cout << "-3 > 7:  " << (x > y) << '\n';
    std::cout << "-3 => 7: " << (x >= y) << '\n';

    std::cout << '\n';
   
}