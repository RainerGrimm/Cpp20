// constinitSqr.cpp

#include <iostream>

consteval int sqr(int n) {
    return n * n;
}

constexpr auto res1 = sqr(5);                  
constinit auto res2 = sqr(5);                 

int main() {

    std::cout << "sqr(5): " << res1 << '\n';
    std::cout << "sqr(5): " << res2 << '\n';
   
    constinit thread_local auto res3 = sqr(5);     
    std::cout << "sqr(5): " << res3 << '\n';

}