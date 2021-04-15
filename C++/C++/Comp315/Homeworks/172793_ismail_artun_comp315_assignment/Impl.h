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
        explicit Stack(int size);
        Stack(std::size_t elms, X value);
        Stack(const std::initializer_list<int> elms);

        //Copy Constructor/Assignment
        Stack<X>(const Stack& other);
        Stack<X>& operator=(const Stack& other);

        //Move Constructor/Assignment
        Stack(Stack && other);
        Stack& operator=(Stack&& other);

        //Destructor
        virtual ~Stack();

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
        void Push(X);
        X Pop();
        X Peek() const;
        void SetAll(X);
        void ReSize(std::size_t);
        int GetSize() const;

        //Operators Overloadings
        int &operator [](std::size_t index) override{
            return arr[index];
        }
        const int &operator [](std::size_t index) const override{
            return arr[index];
        }
        int &operator ()(std::size_t index) override{
            return arr[index];
        }
        const int &operator ()(std::size_t index) const override{
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
        /*friend std::ostream &operator<<(std::ostream&, const Stack<X>& other);
        friend std::istream & operator>>(std::istream&, Stack<X>& other);*/
};
