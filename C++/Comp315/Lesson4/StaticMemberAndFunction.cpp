#include <iostream>

class Base{
    public:
        int x;
        //static değişkenler class içerisinde birden fazla obje bile olsa en son verdiğimiz objenin değerini tutar.
        static int y;
        //static olmayan fonsyonlar static olan nesneleri de tutabilir.
        void printX(){
            std::cout << x << std::endl;
        }
        //static fonksiyonlar sadece static değişkenler ile iş yaparlar.
        static void printY(){
            std::cout << y << std::endl;
        }
};

int Base::y;

int main(){
    Base b1;
    b1.x = 20;
    Base::y = 30;

    Base b2;
    b2.x = 30;
    Base::y = 40;

    b1.printX();
    b1.printY();

    b2.printX();
    b2.printY();

    std::cin.get();
}