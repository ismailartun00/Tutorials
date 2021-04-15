#include <iostream>

//mutable int count = 0;  --> ?
//const int count = 0;  --> ?
//static float f1 = 5.5f;   --> ?
//inline int i = 0  --> ?
//const_exp   --> ?
//copy constructor  --> ?
//explicit      -->?
//implicit      -->?

int main(){

    //ikisi de eşit  -->compile time constant
    //constexpr int y = 5;
    //#define y 5

    //bu şekilde tanımlarsak değişmezliğini bozabiliriz, const_cast ile. -- run time constant
    //const int x = 5;
    //const_cast<int &>(x) = 2;

    std::cin.get();
}