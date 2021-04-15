#include <iostream>
#include "Impl.h"
  
template <class Q>  
Queue<Q>::Queue(int size){      // constructor
    arr = new Q[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}  
template <class Q>   
Queue<Q>::~Queue(){       //destructor
    delete[] arr;
}           
template <class Q>
void Queue<Q>::Dequeue(){
    // check for queue underflow
    if (IsEmpty()){
        std::cout << "UnderFlow\nProgram Terminated" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << "Removing " << arr[front] << std::endl;

    front = (front + 1) % capacity;
    count--;
}
template <class Q>
void Queue<Q>::Enqueue(Q item){
    // check for queue overflow
    if (IsFull()){
        std::cout << "OverFlow\nProgram Terminated" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << "Inserting " << item << std::endl;

    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
template <class Q>
Q Queue<Q>::Peek(){
    if (IsEmpty()){
        std::cout << "UnderFlow\nProgram Terminated" << std::endl;
        exit(EXIT_FAILURE);
    }
    return arr[front];
}
template <class Q>
int Queue<Q>::Size(){
        return count;
}
template <class Q>
bool Queue<Q>::IsEmpty(){
    return (Size() == 0);
}
template <class Q>
bool Queue<Q>::IsFull(){
    return (Size() == capacity);
}
