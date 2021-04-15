#include <iostream>
class A{
    public:
        void fn();
        void g();
};
class B : private A{
    public:
        void fn(){
            A::fn();
        }
        void h(){
            fn();
        }
};

int main(){
    B b;
    b.fn(); //ok
    //b.g();  //not ok


    std::cin.get();
}