#pragma once
#include "Interface.h"
#include <iostream>

template <class T> 
class Node {
public:
    T data;
    Node* next;
};
template <class T> 
class LinkedList : public Entity<T>, public Node<T>{
    private:
        Node<T>* head, *temp, *tail;
    public:
        LinkedList(); 
        ~LinkedList();
        void addnode(T value);
        void reverseList();
        void display();
        void find(T x);
        void remove(T x);
        void insertAtEnd(T x);

        

        //move constructor
        LinkedList(LinkedList&& move) {
            head = move.head;
            move.head = nullptr;
            tail = move.tail;
            move.tail = nullptr;
        }
        //! Copy assignment operator
        LinkedList& operator= (const LinkedList& list) {
            
            tail = nullptr;
            head = tail;
        
            Node<T>* current = list.head;
            Node<T>* next = list.head->next;
            Node<T>* replace = head;
            while (next != list.tail) {
                current = current->next;
                next = next->next;
                replace->next = tail;
                replace->next->data;
                replace = replace->next;
            }
            return *this;
        }
        

        //! Move assignment operator
        
        LinkedList& operator= (LinkedList&& other) {        
            
            tail = nullptr;
            head = tail;

            head->next = other.head->next;
            Node<T>* current = other.head;
            Node<T>* next = other.head->next;

            while (next != other.tail) {

                current = current->next;
                next = next->next;
            }
            current->next = tail;
            other.head->next = other.tail;

            return *this;
        }

        int operator[](size_t n) const {
            Node<T>* current = head;
            while (current != nullptr && n-- > 0){
                current = current->next;
            }
            return (current == nullptr ? 0 : current->data);
        }

        bool operator== (const LinkedList &L1){
            bool status = true;
            Node<T> *nodePtr = L1.head;
            Node<T> *nodePtr2 = head;
            while (nodePtr != nullptr){
                if (nodePtr == nodePtr2){
                    nodePtr = nodePtr->next;
                    nodePtr2 = nodePtr2->next;
                }
                else{
                    status = false;
                }
            }
            return status;
        }

        bool operator!= (const LinkedList &L1){
            bool status = true;
            Node<T> *nodePtr = L1.head;
            Node<T> *nodePtr2 = head;
            while (nodePtr != nullptr){
                if (nodePtr != nodePtr2){
                    nodePtr = nodePtr->next;
                    nodePtr2 = nodePtr2->next;
                }
                else{
                    status = false;
                }
            }
            return status;
        }
};


