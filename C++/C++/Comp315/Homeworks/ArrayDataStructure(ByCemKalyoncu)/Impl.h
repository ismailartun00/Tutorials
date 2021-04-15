#pragma once

#include "Interface.h"
#include <initializer_list>
#include <iostream>

class Array: public ArrayInterface{
    private:
        int *data = nullptr;
        std::size_t size = 0;
    public:
        Array() = default;
        explicit Array(std::size_t elms);
        Array(std::size_t elms, int value);
        Array( const std::initializer_list<int> elms);
        Array(const Array &other);
        Array(Array &&other);
        virtual ~Array();
        int& operator[] (std::size_t index) override{
            return data[index];
        }
        const int& operator[] (std::size_t index) const override{
            return data[index];
        }
        std::size_t GetSize() const override{
            return size;
        }
        void Resize(std::size_t newsize);
        void SetAll(int value);
        int *begin(){
            return data;
        }
        const int *begin() const{
            return data;
        }
        int *end(){
            return data+size;
        }
        const int *end() const{
            return data+size;
        }
};
std::ostream &operator<<(std::ostream &out, const Array &val);