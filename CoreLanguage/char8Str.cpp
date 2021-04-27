// char8Str.cpp

#include <iostream>
#include <string>

int main() {

    const char8_t* char8Str = u8"Hello world";
    std::basic_string<char8_t> char8String = u8"helloWorld";
    std::u8string char8String2 = u8"helloWorld";
    
    char8String2 += u8".";
    
    std::cout << "char8String.size(): " << char8String.size() << '\n';
    std::cout << "char8String2.size(): " << char8String2.size() << '\n';
    
    char8String2.replace(0, 5, u8"Hello ");
    
    std::cout << "char8String2.size(): " << char8String2.size() << '\n';
 
}