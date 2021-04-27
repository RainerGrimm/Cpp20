// nonTypeTemplateParameterString.cpp

#include <algorithm>
#include <iostream>

template <int N>
class StringLiteral {
 public:
    constexpr StringLiteral(char const (&str)[N]) {
        std::copy(str, str + N, data);
    }
    char data[N]; 
};

template <StringLiteral str>
class ClassTemplate {};

template <StringLiteral str>
void FunctionTemplate() {
    std::cout << str.data << '\n';
}

int main() {

    std::cout << '\n';

    FunctionTemplate<"string literal">();
    ClassTemplate<"string literal"> cls;

    std::cout << '\n';
    
}