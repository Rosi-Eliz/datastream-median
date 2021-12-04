#ifndef MINHEAP_HPP
#define MINHEAP_HPP
#include "BinaryHeap.hpp"

template <typename T>
class MinHeap : public BinaryHeap<T>
{
    using BinaryHeap<T>::values;
    using BinaryHeap<T>::parentNode;
    using BinaryHeap<T>::leftNode;
    using BinaryHeap<T>::rightNode;
    using BinaryHeap<T>::swapElements;
    using BinaryHeap<T>::isEmpty;
    using BinaryHeap<T>::size;
    using typename BinaryHeap<T>::U32;

public:
    void insertElement(T element) override
    {
        values.push_back(element);
        U32 index = size() - 1;
        while (index != 0 && values[index] < values[parentNode(index)])
        {
            swapElements(values[index], values[parentNode(index)]);
            index = parentNode(index);
        }
    }

    T extractMin()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Heap is empty");
        }

        T min = values[0];
        values[0] = values.back();
        values.pop_back();
        if (size() > 0)
        {
            heapify(0);
        }
        return min;
    }

private: 
    void heapify(U32 index)
    {
        U32 left = leftNode(index);
        U32 right = rightNode(index);
        U32 smallest = index;
        if (left < size() && values[left] < values[index])
        {
            smallest = left;
        }
        if (right < size() && values[right] < values[smallest])
        {
            smallest = right;
        }
        if (smallest != index)
        {
            swapElements(values[index], values[smallest]);
            heapify(smallest);
        }
    }
};

#endif