//C++ STL program to demonstrate difference between 
//vector size and capacity 
#include <iostream>
#include <vector>

int main()
{
    //vector declaration
    std::vector<int> v1{ 10, 20, 30, 40, 50 };
    std::vector<int> v2{ 100, 200, 300, 400 };

    //size, capacity and elements of vector v1
    std::cout << "size of v1: " << v1.size() << std::endl;
    std::cout << "capacity of v1: " << v1.capacity() << std::endl;
    std::cout << "v1: ";
    for (int x : v1)
        std::cout << x << " ";
        
    std::cout << std::endl;

    //size, capacity and elements of vector v2
    std::cout << "size of v2: " << v2.size() << std::endl;
    std::cout << "capacity of v2: " << v2.capacity() << std::endl;
    std::cout << "v2: ";
    for (int x : v2)
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}