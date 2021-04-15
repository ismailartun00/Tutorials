#pragma once
#include <cstring>

template <class X> struct Base{
    virtual ~Base(){}
    virtual bool IsEmpty() const = 0;
    virtual bool IsFull() const = 0;
    virtual X Peek() const = 0;
    virtual int GetSize() const = 0;
    virtual void Push(X value) = 0;
    virtual X Pop() = 0;
    virtual void SetAll(X value) = 0;
    virtual void ReSize(std::size_t newSize) = 0;
    virtual const X &operator [](std::size_t index)const = 0;
    virtual const X &operator ()(std::size_t index)const = 0;
    virtual X &operator [](std::size_t index) = 0;
    virtual X &operator ()(std::size_t index) = 0;
};
