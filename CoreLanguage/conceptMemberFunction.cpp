// conceptMemberFunction.cpp

#include <concepts>
#include <iostream>     

struct NotCopyable {
    NotCopyable() = default;
	NotCopyable(const NotCopyable&) = delete;
};

template <typename T>
struct MyVector{
    void push_back(const T&) requires std::copyable<T> {}
};

int main() {

    MyVector<int> myVec1;
    myVec1.push_back(2020);

    MyVector<NotCopyable> myVec2;
    myVec2.push_back(NotCopyable());   // ERROR because not copyable

}