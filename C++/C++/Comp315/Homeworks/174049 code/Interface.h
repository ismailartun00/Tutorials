#pragma once

template <class T> class Entity{
    public:
        virtual void addnode(T) = 0;
        virtual void reverseList() = 0;
        virtual void display() = 0;
        virtual void find(T) =0;
        virtual void remove(T) =0;
        virtual void insertAtEnd(T )=0;
};