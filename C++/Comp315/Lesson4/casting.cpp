#include <iostream>

// static_cast_Operator.cpp
// compile with: /LD
class B {};

class D : public B {};

void f(B* pb, D* pd) {
   D* pd2 = dynamic_cast<D*>(pb);   // Not safe, D can have fields
                                   // and methods that are not in B.

   B* pb2 = static_cast<B*>(pd);   // Safe conversion, D always
                                   // contains all of B.
}

int main(){
    double value = 5.25;
    //double a = static_cast<int>(value) + 5.3;
    double a = (int)value + 5.3;

    std::cin.get();
}