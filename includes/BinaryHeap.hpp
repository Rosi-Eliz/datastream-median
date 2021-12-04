#ifndef BINARYHEAP_HPP
#define BINARYHEAP_HPP
#include <type_traits>
#include <vector>


template <typename T>
class BinaryHeap
{
    protected:
    std::vector<T> values;
    using U32 = uint32_t;

    public:
    BinaryHeap() : values()
    {
        // Compile-time check
        static_assert(std::is_arithmetic<T>::value, "T must be an arithmetic type");

    }

    ~BinaryHeap()
    {
        values.clear();
    }

    bool isEmpty()
    {
        return values.empty();
    }

    U32 size()
    {
        return values.size();
    }

    U32 parentNode(U32 index)
    {
        return (index - 1) / 2;
    }

    U32 leftNode(U32 index)
    {
        return (2 * index + 1);
    }

    U32 rightNode(U32 index)
    {
        return (2 * index + 2);
    }

    virtual void insertElement(T element) = 0;

    T peek()
    {
        return values[0];
    }

    protected: 
    void swapElements(U32 index1, U32 index2)
    {
        if(index1 == index2)
        {
            return;
        }

        if( (index1 >= values.size() || index2 >= values.size()) || (index1 < 0 || index2 < 0) )
        {
            throw std::out_of_range("Index out of range");
        }

        T temp = values[index1];
        values[index1] = values[index2];
        values[index2] = temp;
    }

};

#endif
