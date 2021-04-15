#include <iostream>
#include <string>

int main(){
    std::string hello = "Hello World!";

    std::cout << hello.substr(6) << std::endl; //Worlld!

    std::cout << hello.substr(2, 3) << std::endl;  //llo

    std::cin.get();
}