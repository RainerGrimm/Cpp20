// checkExistence.cpp

#include <set>
#include <iostream>

int main() {

    std::cout << '\n';

    std::set mySet{3, 2, 1};
    if (mySet.find(2) != mySet.end()) {   
        std::cout << "2 inside" << '\n';
    }

    std::multiset myMultiSet{3, 2, 1, 2};
    if (myMultiSet.count(2)) {           
        std::cout << "2 inside" << '\n';
    } 

    std::cout << '\n';

}