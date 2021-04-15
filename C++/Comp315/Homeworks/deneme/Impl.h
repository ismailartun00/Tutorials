#pragma once
#include "Interface.h"
#include <iostream>
#include <initializer_list>

template <class X> class Stack : public Base<X>{
    private:
        std::size_t totalSize = 0;
        mutable std::size_t currentSize = 0;
        X *arr = nullptr;

    public:
        //Constructors
        Stack();
        explicit Stack<X>(int size);
        Stack<X>(std::size_t elms, X vale);
        Stack<X>(const std::initializer_list<X> elms);

        //Copy Constructor/Assignment
        Stack<X>(const Stack<X>& other);

        Stack<X>& operator=(const Stack<X>& other);

        //Move Constructor/Assignment
        Stack<X>(Stack<X>&& other);
        Stack<X>& operator=(Stack<X>&& other);

        //Destructor
        virtual ~Stack<X>();

        //Additional Functions
        int *begin(){
            return arr;
        }
        const int *begin() const{
            return arr;
        }
        int *end(){
            return arr+totalSize;
        }
        const int *end() const{
            return arr+totalSize;
        }
        bool IsEmpty() const;
        bool IsFull() const;
        void Push(X value);
        X Pop();
        X Peek() const;
        void SetAll(X value);
        void ReSize(std::size_t newSize);
        int GetSize() const;

        //Operators Overloadings
        X &operator [](std::size_t index) override{
            return arr[index];
        }
        const X &operator [](std::size_t index) const override{
            return arr[index];
        }
        X &operator ()(std::size_t index) override{
            return arr[index];
        }
        const X &operator ()(std::size_t index) const override{
            return arr[index];
        }
        bool operator== (const Stack& other) const {
            if (currentSize == other.currentSize){
                for(int i = 0; i< other.totalSize; i++){
                    if(arr[i] != other.arr[i])
                        return false;
                }return true;
            }return false;
        }
        bool operator!= (const Stack& other) const{
            if (currentSize != other.currentSize){
                for(int i = 0; i< other.totalSize; i++){
                    if(arr[i] == other.arr[i])
                        return false;
                }return true;
            }return false;
        }

        //istream and ostream operators overloadings
        friend std::ostream &operator<<(std::ostream& out, const Stack<X>& other){
            for (auto x : other)
                out << x << "\t";
            return out;
        }
        friend std::istream &operator>>(std::istream& in, Stack<X>& other){
            std::cout << "Enter size of object: ";
            in >> other.totalSize;
            return in;
        }
};
