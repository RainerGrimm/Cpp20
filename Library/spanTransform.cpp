// spanTransform.cpp

#include <algorithm>
#include <iostream>
#include <vector>
#include <span>

void printMe(std::span<int> container) {
    
    std::cout << "container.size(): " << container.size() << '\n';
    for (auto e : container) std::cout << e << ' ';
    std::cout << "\n\n";
}

int main() {
    
    std::cout << '\n';
    
    std::vector vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    
    printMe(vec);
    
    std::span span1(vec);                                 
    std::span span2{span1.subspan(1, span1.size() - 2)};  
    
                                                 
    std::transform(span2.begin(), span2.end(),            
                   span2.begin(), 
                   [](int i){ return i * i; });
    
    
    printMe(vec);   
    printMe(span1);                             
    
}