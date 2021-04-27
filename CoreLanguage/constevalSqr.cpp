// constevalSqr.cpp

#include <iostream>

consteval int sqr(int n) {
    return n * n;
}

int main() {
    
    std::cout << "sqr(5): " << sqr(5) << '\n';     
    
    const int a = 5;                                    
    std::cout << "sqr(a): " << sqr(a) << '\n';     

    int b = 5;                                          
    // std::cout << "sqr(b): " << sqr(b) << '\n'; ERROR

}