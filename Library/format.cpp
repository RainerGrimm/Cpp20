// format.cpp

#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>
#include <iterator>
#include <string>
 
int main() {
    
    std::cout << '\n';

    std::cout << fmt::format("Hello, C++{}!\n", "20") << '\n';

    std::string buffer;
 
    fmt::format_to(
        std::back_inserter(buffer), 
        "Hello, C++{}!\n",          
        "20");    
        
    std::cout << buffer << '\n';

    buffer.clear(); 

    fmt::format_to_n(
        std::back_inserter(buffer), 5, 
        "Hello, C++{}!\n",          
        "20");    
        
    std::cout << buffer << '\n';

    
    std::cout << '\n';
   
}