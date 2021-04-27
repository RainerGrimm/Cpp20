// conceptsOverloadingFunctionTemplates.cpp

#include <concepts>
#include <iostream>
#include <forward_list>
#include <list>
#include <vector>

template<std::forward_iterator I>
void advance(I& iter, int n){
    std::cout << "forward_iterator" << '\n';
}

template<std::bidirectional_iterator I>
void advance(I& iter, int n){
    std::cout << "bidirectional_iterator" << '\n';
}

template<std::random_access_iterator I>
void advance(I& iter, int n){
    std::cout << "random_access_iterator" << '\n';
}

int main() {

    std::cout << '\n';

    std::forward_list forwList{1, 2, 3};
    std::forward_list<int>::iterator itFor = forwList.begin();
    advance(itFor, 2);

    std::list li{1, 2, 3};
    std::list<int>::iterator itBi = li.begin();
    advance(itBi, 2);

    std::vector vec{1, 2, 3};
    std::vector<int>::iterator itRa = vec.begin();
    advance(itRa, 2);

    std::cout << '\n';
}