#include <iostream>
#include <string>
class Printable{
    public:
        virtual std::string GetClassName() = 0;
};
class Entity : public Printable{
    public:
        std::string  GetClassName() override{ 
            return "Entity";
        }
};
class Player : public Entity{
    private:
        std::string m_Name;
    public:
        Player(const std::string& name) : m_Name(name){}

        std::string GetClassName() override{
            return m_Name;
        }
};

class A : public Printable{
    public:
        std::string GetClassName() override{
            return "A";
        }
};
void Print(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}
int main(){
    Entity* e = new Entity();
    Player* p = new Player("Ismail");
    A* a = new A();

    Print(e);
    Print(p);
    Print(a);

    std::cin.get();
}