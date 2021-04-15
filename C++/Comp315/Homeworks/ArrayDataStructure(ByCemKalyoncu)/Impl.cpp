#include "Impl.h"

Array::Array(std::size_t elms) : size(elms)
{
    data = new int[elms];
}
Array::Array(std::size_t elms, int value) : size(elms)
{
    data = new int[elms];
    for (std::size_t i = 0; i < elms; i++)
        data[i] = value;
}
Array::Array(const std::initializer_list<int> elms) : size(elms.size())
{
    data = new int[elms.size()];
    std::size_t i = 0;
    for (auto &d : elms)
        data[i++] = d;
}
Array::Array(const Array &other) : size(other.GetSize())
{
    data = new int[other.GetSize()];
    for (int i = 0; i < GetSize(); i++)
    {
        data[i] = other[i];
    }
}
Array::Array(Array &&other) : data(other.data), size(other.GetSize())
{
    other.data = nullptr;
    other.size = 0;
}
Array::~Array()
{
    delete[] data;
}
std::ostream &operator<<(std::ostream &out, const Array &val)
{
    for (auto v : val)
    {
        out << v << "\t";
    }
    return out;
}