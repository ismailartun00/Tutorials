#include <iostream>
#include <vector>

void printvector(const std::vector<int> &v){
    for(auto x : v){
        std::cout << x << "\t";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> v = {2, 5, 10, 7, 6};
    printvector(v);

    v.push_back(1);
    printvector(v);

    v.resize(8);
    printvector(v);

    v.insert(begin(v)+4, 2);

    /*auto elm = begin(v); //v.begin()
    //end(v) iterator ile kullanılmaz sadece bu element dışarıdadır.
    while(elm != end(v)){
        std::cout << *elm << "\t";
        ++elm;
    }
    std::cout << std::endl;*/

    for(auto elm = begin(v); elm != end(v); ++elm)
        std::cout << *elm << "\t";
    std::cout << std::endl;

    v.erase(end(v)-3, end(v)-1);
    printvector(v);

    std::cout << v.size() << " : " << v.capacity() << std::endl;

    std::cin.get();
}