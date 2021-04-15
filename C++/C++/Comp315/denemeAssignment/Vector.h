#pragma once 

template <typename T>
class Vector{
    private:
        T* m_Data = nullptr;
        size_t m_Size = 0;
        size_t m_Capacity = 0;
        void ReAlloc(size_t newCapacity){
            //1.    allocate a new block of memory
            //2.    copy/move old elements into new block
            //3.    delete

            T* newBlock = new T[newCapacity];

            if(newCapacity < m_Size)
                m_Size = newCapacity;

            for(size_t i = 0; i < m_Size; i++)
                newBlock[i] = m_Data[i];

            delete[] m_Data;
            m_Data = newBlock;
            m_Capacity = newCapacity;
        }
    public:
        Vector(){
            //allocated
            ReAlloc(2);
        }
        void PushBack(const T& value){
            if(m_Size >= m_Capacity){
                ReAlloc(m_Capacity + m_Capacity /2);
            }

            m_Data[m_Size] = value;
            m_Size++;
        }
        const T& operator[](size_t index) const{
            if(index >= m_Size){
                //assert
            }
            return m_Data[index];
        }

        T& operator[](size_t index) {
            if(index >= m_Size){
                //assert
            }
            return m_Data[index];
        }

        size_t Size() const{
            return m_Size;
        }
};