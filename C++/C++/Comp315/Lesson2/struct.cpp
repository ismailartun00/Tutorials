#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <cstdlib>

struct student{
    int id;
    std::string name;
};

int main(){
    std::vector<std::string> names = {"ali", "veli", "ahmet", "mehmet", "ayse", "fatma", "ozlem", "arzu"};
    std::vector<student> hello;
    hello.resize(26);

    std::generate(begin(hello), end(hello), [&](){
        return student{rand()%100, names[rand()%names.size()]};
    });

    std::sort(begin(hello), end(hello), [](auto left, auto right){
        //return left.name < right.name;  //return left.id < right.id;
        return
            left.name == right.name ?
                left.id < right.id:
                left.name < right.name
        ;
    });
    
    for(auto x : hello){
        int i = 0;
        std::cout << x.id << "\t" << x.name << std::endl;
        i++;
    }
    std::cout << std::endl;
    
    std::cin.get();
}