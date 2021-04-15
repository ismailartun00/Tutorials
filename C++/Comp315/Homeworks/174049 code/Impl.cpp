#include "Impl.h"
#include<iostream>
// constructor
template <class T>
LinkedList<T>::LinkedList() {  
    std::cout << "Constructor" << std::endl;
    head = nullptr;
    tail = nullptr;
}

template <class T>
LinkedList<T>::~LinkedList(){
    std::cout << "Destructor" << std::endl;
}
// function to add node to a list
template <class T>
void LinkedList<T>::addnode(T value) {
    Node<T>* tempnode = new Node<T>();
    tempnode->data = value;
    tempnode->next = NULL;
    if (head == NULL) {
        head = tempnode;
    }
    else {
        Node<T>* temp = head; // head is not NULL
        while (temp->next != NULL) { 
            temp = temp->next; // go to end of list
        }
        temp->next = tempnode; // linking to newnode
    }
}
// reverse Linked List
template <class T>
void LinkedList<T>::reverseList() {
    Node<T>* temp = head;
    Node<T>* next_node = NULL;
    Node<T>* reverse_node = NULL;
    while (temp != NULL) {
        head = temp;
        next_node = temp->next;
        temp->next = reverse_node;
        reverse_node = temp;
        temp = next_node;
    }
}
template <class T>
void LinkedList<T>::display() {
    if (head == NULL) {
        std::cout << "List Empty!" << std::endl;
    }
    else {
        Node<T>* temp = head;
        while (temp != NULL) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}
template <class T>
void LinkedList<T>::find(T x)
    {
        int i;
        for(i=1, temp = head;temp->next != NULL && temp->data != x;temp = temp->next, i++);
        if(temp->data == x)
        {
            std::cout << "Found at position:" << i << std::endl;
        }
        else if(temp->next == NULL)
        {
            std::cout <<"Not found..." << std::endl;
        }
    }
template <class T>
void LinkedList<T>::remove(T x)
    {
        temp = head;
        Node<T> *prev;
        while(temp->next != NULL && temp->data != x)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp->data == x)
        {
            prev->next = temp->next;
            delete temp;
        }
        else if(temp->next == NULL)
        {
            std::cout << "Not found..." << std::endl;
        }
    }
template <class T>
void LinkedList<T>::insertAtEnd(T x){
    Node<T> *temp = new Node<T>;
    temp->data = x;
    temp->next = NULL;
    tail->next = temp;
    tail = temp; 
} 
