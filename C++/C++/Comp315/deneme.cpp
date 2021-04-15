#include <iostream>

#define MAX 3
class Base{
    virtual bool Push(int) = 0;
    virtual int Pop() = 0;
    virtual int Peek() = 0;
    virtual bool IsEmpty() = 0;
    virtual bool IsFull() = 0;
};
class Stack : public Base{
private:
    //private members (data & functions)
    int stck_size;
    int* stck;
    int top;
public:
    //Functions of Stack Class
    Stack(){
        top = -1;
        std::cout << "Constructor is worked." << std::endl;
    }
    Stack(const Stack & src) : stck_size(src.stck_size), stck(new int[stck_size]), top(src.top){
        for (int index = 0; index <= top; index++){
            stck[index] = src.stck[index];
        }
        std::cout << "Copy-Constructor is worked." << std::endl;
    }
    ~Stack() {
        delete[] stck;
        std::cout << "Destructor is worked." << std::endl;
    }
    //Rule Functions
    bool Push(int t){
        if (top >= (MAX - 1)){
            std::cout << "Stack Overflow.";
            return false;
        }
        else{
            stck[++top] = t;
            std::cout << t << "Pushed Into Stack." << std::endl;
            return true;
        }
    }
    int Pop() {
        if (top < 0) {
            std::cout << "Stack underflow." << std::endl;
            return 0;
        }
        else{
            int t = stck[top--];
            std::cout << "Popped From Stack." << t << std::endl;
            return t;
        }
    }
    int Peek(){
        if (top < 0){
            std::cout << "Stack is Empty.";
            return 0;
        }
        else{
            int t = stck[top];
            return t;
        }
    }
    bool IsEmpty(){
        return (top < 0 ? true : false);
    }
    bool IsFull() {
       return (top == MAX ? true : false);
    }
    //Additional Functions
    void Size(){
        std::cout << "Stack size is " << top + 1 << std::endl;
    }
    void Capacity(){
        std::cout << "Stack capacity is " <<  MAX << std::endl;
    }
    void Print(){
        for(int x = 0; x <= top; x++)
            std::cout << (x+1) << ".value " << stck[x] << std::endl;
    }
};
int main() {

    Stack s;

    s.Push(4);
    s.Push(13);
    s.Push(7);
    s.Push(5);
    s.Pop();
    s.Peek();
    s.IsEmpty();
    s.IsFull();
    s.Size();
    s.Capacity();
    s.Print();

    Stack s2(s);
    s2.IsEmpty();
    s2.IsFull();
    s2.Size();
    s2.Capacity();
    s2.Print();

    return 0;
}
