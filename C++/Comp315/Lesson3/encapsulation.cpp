//Encapsulation in C++

//NOTES:
//1. Encapsulation is an object-oriented programming concept which talks about
//   binding together the data and the functions that manipulates those data.
//2. Class is an example of encapsulation.
//      >> if we have created some class and data member and member function
//         then it is an example of encapsulation.

#include <iostream>

class Base{
    private:
        int x;
    public:
        void SetX(int a){
            x = a;
        }
        int GetX(){
            return x;
        }
};

int main(){


    std::cin.get();
}