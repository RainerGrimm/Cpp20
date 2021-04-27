// placeholders.cpp

#include <concepts>
#include <iostream>
#include <vector>

std::integral auto getIntegral(int val){                    
    return val;
}

int main(){

    std::cout << std::boolalpha << '\n';
 
    std::vector<int> vec{1, 2, 3, 4, 5};
    for (std::integral auto i: vec) std::cout << i << " ";  

    std::integral auto b = true;                            
    std::cout << b << '\n';

    std::integral auto integ = getIntegral(10);             
    std::cout << integ << '\n';

    auto integ1 = getIntegral(10);                     
    std::cout << integ1 << '\n';

    std::cout << '\n';

}