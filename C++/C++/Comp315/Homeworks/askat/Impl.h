#pragma once
#include "Interface.h"

template <class Q> class Queue : public Base<Q>{
    private:
        Q *arr;       // array to store queue elements
        int capacity;   // maximum capacity of the queue
        int front;      // front points to front element in the queue (if any)
        int rear;       // rear points to last element in the queue
        int count;      // current size of the queue
    
    public:
        Queue() =default;
        explicit Queue(int);     // constructor
        ~Queue();       // destructor
        Queue(const Queue& q1): capacity(q1.capacity), arr(new Q[capacity]) {
            for (int index = 0; index < capacity; index++){
                arr[index] = q1.arr[index];
            }
        }
        Queue& operator=(const Queue& q1) {
            if (this == &q1){
                return *this;
            }
            delete[] arr;
            capacity = q1.capacity;
            arr = new int[capacity];
            for (int i = 0; i < capacity; i++){
                arr[i] = q1.arr[i];
            }
            return *this;
        }
        Queue(Queue&& q1) : arr(nullptr), capacity(0){
            arr = q1.arr;
            capacity = q1.capacity;
            
            q1.arr = nullptr;
            q1.capacity = 0;
        }
        Queue& operator=(Queue&& q1){
            if(this == &q1){
                return *this;
            }
            delete[] arr;
            capacity = q1.capacity;
            arr = q1.arr;
            for(int k = 0; k <capacity; k++){
                arr[k] = q1.arr[k];
            }
            q1.arr = nullptr;
            q1.capacity = 0;
            return *this;
        }
    
        //Additional Functions
        void Dequeue();
        void Enqueue(Q);
        Q Peek();
        int Size();
        bool IsEmpty();
        bool IsFull();


        int *begin(){
            return arr;
        }
        const int *begin() const{
            return arr;
        }
        int *end(){
            return arr+capacity;
        }
        const int *end() const{
            return arr+capacity;
        }

        Q &operator [](std::size_t index)const override {
            return arr[index];
        }
        bool operator== (const Queue& q1) const {
            if (capacity == q1.capacity){
                return true;
            }
            for(int k = 0; k< q1.capacity; k++){
                if(arr[k] != q1.arr[k]){
                    return false;
                }
            }
            return false;
        }
        bool operator!= (const Queue& q1) const {
            if (capacity != q1.capacity){
                return true;
            }
            for(int k = 0; k< q1.capacity; k++){
                if(arr[k] == q1.arr[k]){
                    return false;
                }
            }
            return false;
        }

        friend std::ostream &operator<<(std::ostream& out, const Queue& q1){
            for (auto x : q1)
                out << x << "\t";
            return out;
        }
        friend std::istream & operator>>(std::istream& in, Queue& q1){
            std::cout << "Size: ";
            in >> q1.capacity;
            return in;
        }
};