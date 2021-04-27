// templateLambdaVector.cpp

#include <concepts>
#include <deque>
#include <iostream>
#include <string>
#include <vector>

auto lambdaGeneric = [](const auto& container) { return container.size(); };  
auto lambdaVector = []<typename T>(const std::vector<T>& vec) { return vec.size(); };
auto lambdaVectorIntegral = []<std::integral T>(const std::vector<T>& vec) { return vec.size(); };

int main() {

    
    std::cout << '\n';
    
    std::deque deq{1, 2, 3};                                    
    std::vector vecDouble{1.1, 2.2, 3.3, 4.4};   
    std::vector vecInt{1, 2, 3, 4, 5};           
  
    std::cout << "lambdaGeneric(deq): " << lambdaGeneric(deq) << '\n';
    // std::cout << "lambdaVector(deq): " << lambdaVector(deq) << '\n';                  ERROR
    // std::cout << "lambdaVectorIntegral(deq): " << lambdaVectorIntegral(deq) << '\n';  ERROR

    std::cout << '\n';
    
    std::cout << "lambdaGeneric(vecDouble): " << lambdaGeneric(vecDouble) << '\n';
    std::cout << "lambdaVector(vecDouble): " << lambdaVector(vecDouble) << '\n';
    // std::cout << "lambdaVectorIntegral(vecDouble): " << lambdaVectorIntegral(vecDouble) << '\n';
    
    std::cout << '\n';
     
    std::cout << "lambdaGeneric(vecInt): " << lambdaGeneric(vecInt) << '\n';
    std::cout << "lambdaVector(vecInt): " << lambdaVector(vecInt) << '\n';
    std::cout << "lambdaVectorIntegral(vecInt): " << lambdaVectorIntegral(vecInt) << '\n';
    
    std::cout << '\n';
    
}