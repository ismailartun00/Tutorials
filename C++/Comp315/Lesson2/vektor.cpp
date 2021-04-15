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

    for(int i=0; i<5; i++)
        v.pop_back();
    printvector(v);

    std::cout << v.size() << " : " << v.capacity() << std::endl;

    std::cin.get();
}