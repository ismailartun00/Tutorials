#include <iostream>

class Base{
    private:
        int x;
        friend class GetSet;
    public:
        Base(){}
        Base(int a) : x(a){}
};

class GetSet{
    public:
        void set(Base& obj, int x){
            obj.x = x;
        }
        int get(Base& obj){
            return obj.x;
        }
};


int main(){
    Base obj(10);
    GetSet gs;
    std::cout << gs.get(obj) << std::endl;
    gs.set(obj,20);
    std::cout << gs.get(obj) << std::endl;

    std::cin.get();
}