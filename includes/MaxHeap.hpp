#ifndef MAXHEAP_HPP
#define MAXHEAP_HPP
#include "BinaryHeap.hpp"

template <typename T>
class MaxHeap : public BinaryHeap<T>
{ 
public:
    using BinaryHeap<T>::values;
    using BinaryHeap<T>::parentNode;
    using BinaryHeap<T>::leftNode;
    using BinaryHeap<T>::rightNode;
    using BinaryHeap<T>::swapElements;
    using BinaryHeap<T>::isEmpty;
    using BinaryHeap<T>::size;
    using typename BinaryHeap<T>::U32;

    void insertElement(T element) override
    {
        values.push_back(element);
        U32 index = size() - 1;
        while (index != 0 && values[index] > values[parentNode(index)])
        {
            swapElements(index, parentNode(index));
            index = parentNode(index);
        }
    }

    T extractMax()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Heap is empty");
        }
        T max = values[0];
        values[0] = values.back();
        values.pop_back();
        if (size() > 0)
        {
            heapify(0);
        }
        return max;
    }

    private: 
    void heapify(U32 index)
    {
        U32 left = leftNode(index);
        U32 right = rightNode(index);
        U32 largest = index;
        if (left < size() && values[left] > values[largest])
        {
            largest = left;
        }
        if (right < size() && values[right] > values[largest])
        {
            largest = right;
        }
        if (largest != index)
        {
            swapElements(index, largest);
            heapify(largest);
        }
    }

};

#endif
