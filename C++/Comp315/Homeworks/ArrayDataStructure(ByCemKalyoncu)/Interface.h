#pragma once
#include <cstring>

class ArrayInterface{
    public:
        virtual ~ArrayInterface(){}
        virtual int &operator [](std::size_t index) = 0;
        virtual const int &operator [](std::size_t index) const = 0;
        virtual std::size_t GetSize() const = 0;
};