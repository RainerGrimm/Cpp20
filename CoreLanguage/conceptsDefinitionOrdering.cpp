// conceptsDefinitionOrdering.cpp

#include <concepts>
#include <iostream>
#include <unordered_set>

template<typename T>
concept Equal =
    requires(T a, T b) {
        { a == b } -> std::convertible_to<bool>;
        { a != b } -> std::convertible_to<bool>;
    };


template <typename T>
concept Ordering =
    Equal<T> &&
    requires(T a, T b) {
        { a <= b } -> std::convertible_to<bool>;
        { a < b } -> std::convertible_to<bool>;
        { a > b } -> std::convertible_to<bool>;
        { a >= b } -> std::convertible_to<bool>;
    };

template <Equal T>
bool areEqual(const T& a, const T& b) {
    return a == b;
}

template <Ordering T>
T getSmaller(const T& a, const T& b) {
    return (a < b) ? a : b;
}
    
int main() {
  
    std::cout << std::boolalpha << '\n';
  
    std::cout << "areEqual(1, 5): " << areEqual(1, 5) << '\n';
  
    std::cout << "getSmaller(1, 5): " << getSmaller(1, 5) << '\n';
  
    std::unordered_set<int> firSet{1, 2, 3, 4, 5};
    std::unordered_set<int> secSet{5, 4, 3, 2, 1};
  
    std::cout << "areEqual(firSet, secSet): " << areEqual(firSet, secSet) << '\n';
  
    // auto smallerSet = getSmaller(firSet, secSet);
  
    std::cout << '\n';
  
}