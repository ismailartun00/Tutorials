// Question: What is abstraction in c++?
// Answer: It is an object-oriented programming concept that talks about show only necessary things.

#include <iostream>

class Rectangle{
    private:
        int width, height;
    public:
        void SetValues(int x, int y){
            width = x;
            height = y;
        }
        int area(){
            return width*height;
        }
        int GetWidth(){
            return width;
        }
        int GetHight(){
            return height;
        }
};

int main(){
    Rectangle obj;

    std::cin.get();
}