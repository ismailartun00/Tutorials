#include <iostream>

//cem hoca: tek paremetreli constructor explicit olmalı.

struct S{
    explicit S(int){}
};

void f(const S&);

int main(){
    f(static_cast<S>(10));

    std::cin.get();
}

