#pragma once

template <class Q> class Base{
    public:
        virtual void Dequeue() = 0;
        virtual void Enqueue(Q x) = 0;
        virtual Q Peek() = 0;
        virtual int Size() = 0;
        virtual bool IsEmpty() = 0;
        virtual bool IsFull() = 0;
        virtual Q &operator [](std::size_t) const = 0;
};