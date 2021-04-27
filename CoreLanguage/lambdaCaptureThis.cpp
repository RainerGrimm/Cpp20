// lambdaCaptureThis.cpp

#include <iostream>
#include <string>

struct LambdaFactory {
    auto foo() const {
        return [=] { std::cout << s << '\n'; };    
    }
    std::string s = "LambdaFactory";
     ~LambdaFactory() {
        std::cout << "Goodbye" << '\n';
    }
};

auto makeLambda() {                                               
    LambdaFactory lambdaFactory;                                                                   
    return lambdaFactory.foo();
}                                                      


int main() {
    
    std::cout << '\n';

    auto lam = makeLambda();
    lam(); 

    std::cout << '\n';
    
}