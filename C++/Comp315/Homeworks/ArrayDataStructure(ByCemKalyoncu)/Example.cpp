#include "Impl.h"
#include <iostream>

int main(){
    Array a1(5);
    Array a2(5, 8);
    Array a3 = {6, 8, 4, 1};
    Array a4 = {1, 2, 3};
    Array a5 = a3;
    Array a6 = std::move(a4);

    std::cout << a1 << std::endl;
    std::cout << a2 << std::endl;
    std::cout << a3 << std::endl;
    std::cout << a4 << std::endl;
    std::cout << a5 << std::endl;
    std::cout << a6 << std::endl;

    std::cout << a1.GetSize() << " " << a4.GetSize() << " " << a5.GetSize() << std::endl;

    const Array &a7 = a6;
    a3[1] = 0;

    std::cout << "a3[1] = " << a3[1] << "a3[2] = " << a3[2] << ", a7[1] = " << a7[1] << std::endl;

    return 0;
}