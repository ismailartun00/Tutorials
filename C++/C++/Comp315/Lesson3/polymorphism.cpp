//TOPIC: Polymorphism in C++!!  (Very Important Feature Of OOP)

//POINS:
//There are two types of Polymorphism
//A. Compile Time Polymorphism / Static Binding / Early Binding
//  a. Function Overloading
//  b. Operator Overloading
//B. Runtime Polymorphism / Dynamic Binding / Lazy Binding
// a. Function Overriding (Using virtual functions)

//For more details please watch full video and do let me know if there is any doubts in comment section.

//------------------Function Overloading------------------
/*#include <iostream>
class Test{
    public:
        void fun(int x){
            std::cout << "Integer" << std::endl;
        }
        void fun(double x){
            std::cout << "Double" << std::endl;
        }
};
int main(){
    Test t1;
    t1.fun(10);
    t1.fun(10.5);

    std::cin.get();
}*/

//------------------Operator Overloading------------------
/*#include <iostream>
class Complex{
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i = 0): real(r), imag(i){}
        Complex operator + ( Complex const &obj){
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
    void show(){
        std::cout << real << " + i" << imag << std::endl;
    }
};
int main(){
    Complex c1(1,3), c2(2, 5);
    Complex c3 = c1 + c2;
    c3.show();

    std::cin.get();
}*/

//------------------Function Overriding------------------
//------------------As a Pointer------------------
/*#include <iostream>
class Base{
    public:
        virtual void fun(int x){
            std::cout << "Base" << std::endl;
        }
};
class Derived : public Base{
    public:
        virtual void fun(int x) override{
            std::cout << "Derived" << std::endl;
        }
};
int main(){
    Base *b = new Derived();
    b->fun(10);

    std::cin.get();
}*/
//------------------As a Reference------------------
/*#include <iostream>
class Base{
    public:
        virtual void fun(int x){
            std::cout << "Base" << std::endl;
        }
};
class Derived : public Base{
    public:
        virtual void fun(int x) override{
            std::cout << "Derived" << std::endl;
        }
};
int main(){
    Derived d;
    Base &b = d;
    b.fun(10);

    std::cin.get();
}*/