#include <iostream>
#include <vector>

int main(){

    //std::vector<int> vec = {4,2, 7, 5, 9, -4};
    std::vector<int> vec = {4,2, 7, 5, 9, -4};

    /*for(int i=0; i<vec.size(); i++){
        std::cout << vec[i] << std::endl;
    }*/
    for(auto v : vec){
        std::cout << v << std::endl;
    }

    std::cin.get();
}