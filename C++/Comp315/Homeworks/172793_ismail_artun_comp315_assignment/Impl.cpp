#include "Impl.h"
#include <cstring>

//Constructors
template <class X>
Stack<X>::Stack() = default;
template <class X>
Stack<X>::Stack(int size) : totalSize(size), currentSize(0), arr(new int[totalSize]){}
template <class X>
Stack<X>::Stack(std::size_t elms, X value) : totalSize(elms){
    arr = new int[elms];
    for (std::size_t i = 0; i < elms; i++)
        arr[i] = value;
}
template <class X>
Stack<X>::Stack(const std::initializer_list<int> elms) : totalSize(elms.size()){
    arr = new int[elms.size()];
    std::size_t i = 0;
    for (auto &d : elms)
        arr[i++] = d;
}

//Copy Constructor
template <class X>
Stack<X>::Stack(const Stack& other): currentSize(other.currentSize) , totalSize(other.totalSize), arr(new int[totalSize]){
    for(int i=0; i<other.totalSize; i++)
        arr[i] = other.arr[i];
}

//Copy Assignment Operator
template <class X>
Stack<X>& Stack<X>::operator=(const Stack<X>& other) {
    if (this == &other)
        return *this;
    delete[] arr;

    totalSize = other.totalSize;
    arr = new X[totalSize];

    for (int i = 0; i < totalSize; i++) 
        arr[i] = other.arr[i];
        
    return *this;
}

//Move Assignment
template <class X>
Stack<X>& Stack<X>::operator=(Stack<X>&& other){
    if(this != &other){
        delete[] arr;

        totalSize = other.totalSize;
        arr = other.arr;

        for(int i = 0; i <totalSize; i++)
            arr[i] = other.arr[i];

        other.arr = nullptr;
        other.totalSize = 0;
        other.currentSize = 0;
    }
    return *this;
}

//Move Constructor 
template <class X>
Stack<X>::Stack(Stack &&other) : arr(nullptr), totalSize(0), currentSize(0){
    arr = other.arr;
    totalSize = other.totalSize;
    currentSize = currentSize;
    
    other.arr = nullptr;
    other.totalSize = 0;
    other.currentSize = 0;
}

//Destructor
template <class X>
Stack<X>::~Stack(){
    delete[] arr;
}

//Additional Functions
template <class X>
bool Stack<X>::IsEmpty() const{
    return (currentSize == 0 ? true : false);
}
template <class X>
bool Stack<X>::IsFull() const{
    return (currentSize == totalSize ? true : false);
}
template <class X>
void Stack<X>::Push(X value){
    if(IsFull()){
        std::cout << "Overflow" << std::endl;
    }
    else{
        arr[currentSize] = value;
        currentSize++;
    }
}
template <class X>
X Stack<X>::Pop(){
    if(IsEmpty()){
        std::cout << "Underflow" << std::endl;
        return -1;
    }
    else{
        currentSize--;
        return arr[currentSize];
    }
}
template <class X>
X Stack<X>::Peek() const{
    if(IsEmpty()){
        std::cout << "No item to return" << std::endl;
        return -1;
    }
    else{
        return arr[currentSize];
    }
}
template <class X>
void Stack<X>::SetAll(X value){
    for(int i = 0; i< totalSize; i++)
        arr[i] = value;
}
template <class X>
void Stack<X>::ReSize(std::size_t newSize){
    totalSize = newSize;
}
template <class X>
int Stack<X>::GetSize() const{
    return totalSize;
}

//istream and ostream operators overloadings
/*template <class X>
std::ostream &operator<<(std::ostream &out, const Stack<X>& other){
    for (auto x : other)
        out << x << "\t";
    return out;
}
template <class X>
std::istream & operator>>(std::istream &in, Stack<X>& other) {
   std::cout << "Enter size of object: ";
   in >> other.totalSize;
   return in;
}*/
