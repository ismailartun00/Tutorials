#include <iostream>
class MyClass{

    //deleted constructor
    MyClass() = delete;

    //deleted copy-constructor
    MyClass(const MyClass&) = delete;

    //deleted destructor
    ~MyClass() = delete;
};

int main(){


    std::cin.get();
}