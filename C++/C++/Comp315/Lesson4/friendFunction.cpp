#include <iostream>

class Base{
    private:
        int x;
    public:
        Base(){}
        Base(int a) : x(a){}
        friend void set(Base&, int);
        friend int get(Base&);
        void setX(int);
};
void Base::setX(int y){
    x = y;
}

void set(Base& obj, int x){
    obj.x = x;
}
int get(Base& obj){
    return obj.x;
}

int main(){
    Base obj(10);
    set(obj, 20);

    std::cout << get(obj) << std::endl;

    std::cin.get();
}