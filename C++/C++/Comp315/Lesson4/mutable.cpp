//mutable değerler const içerisindeki fonksiyonda bile olsa değiştirilebilirler.
#include <iostream>

class Entity{
    private:
        std::string m_Name;
        mutable int m_DebugCount = 0;
    public:
        const std::string& GetName() const{
            m_DebugCount++;
            return m_Name;
        }
};

int main(){
    const Entity e;
    e.GetName();

    int x = 8;
    auto f = [=]() mutable{
        x++;
        std::cout << x << std::endl;
    };

    f();
    //x = 8
    std::cout << x << std::endl;

    std::cin.get();
}