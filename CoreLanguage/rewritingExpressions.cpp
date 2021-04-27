// rewritingExpressions.cpp

#include <compare>
#include <iostream>

class MyInt {
 public:
    constexpr MyInt(int val): value{val} { }
    auto operator<=>(const MyInt& rhs) const = default;  
 private:
    int value;
};

int main() {
    
    std::cout << '\n';
    
    constexpr MyInt myInt2011(2011);
    constexpr MyInt myInt2014(2014);
   
    constexpr int int2011(2011);
    constexpr int int2014(2014);
    
    if (myInt2011 < myInt2014) std::cout << "myInt2011 < myInt2014" << '\n';          
    if ((myInt2011 <=> myInt2014) < 0) std::cout << "myInt2011 < myInt2014" << '\n'; 
    
    std::cout << '\n';
    
    if (myInt2011 < int2014) std:: cout << "myInt2011 < int2014" << '\n';             
    if ((myInt2011 <=> int2014) < 0) std:: cout << "myInt2011 < int2014" << '\n';
    
    std::cout << '\n';
    
    if (int2011 < myInt2014) std::cout << "int2011 < myInt2014" << '\n';              
    if (0 < (myInt2014 <=> int2011)) std:: cout << "int2011 < myInt2014" << '\n';     
    
    std::cout << '\n';
    
} 