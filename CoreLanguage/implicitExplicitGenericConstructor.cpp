// implicitExplicitGenericConstructor.cpp

#include <iostream>
#include <string>

struct Implicit {
    template <typename T>       
    Implicit(T t) {
        std::cout << t << '\n';
    }
};

struct Explicit {
    template <typename T>
    explicit Explicit(T t) {    
        std::cout << t << '\n';
    }
};

int main() {
    
    std::cout << '\n';
    
    Implicit imp1 = "implicit";
    Implicit imp2("explicit");
    Implicit imp3 = 1998;
    Implicit imp4(1998);
    
    std::cout << '\n';
    
    // Explicit exp1 = "implicit";  
    Explicit exp2{"explicit"};      
    // Explicit exp3 = 2011;        
    Explicit exp4{2011};           
    
    std::cout << '\n';  

} 