#ifndef MEDIAN_HPP
#define MEDIAN_HPP
#include "MaxHeap.hpp"
#include "MinHeap.hpp"

template <typename T>
class Median
{
private:
    MinHeap<T> minHeap;
    MaxHeap<T> maxHeap;

public:
    Median() : minHeap(), maxHeap() {}

    ~Median() = default;

    void addElement(T element)
    {
        maxHeap.insertElement(element);
        if(!maxHeap.isEmpty() && !minHeap.isEmpty() &&
           maxHeap.peek() > minHeap.peek())
        {
            T maxElement = maxHeap.extractMax();
            minHeap.insertElement(maxElement);
        }
        
        if(maxHeap.size() > minHeap.size() + 1)
        {
            T maxElement = maxHeap.extractMax();
            minHeap.insertElement(maxElement);
        }
        if(minHeap.size() > maxHeap.size() + 1)
        {
            T minElement = minHeap.extractMin();
            maxHeap.insertElement(minElement);
        }
    }

    T getMedian()
    {
        if (minHeap.isEmpty() && maxHeap.isEmpty())
        {
            throw std::runtime_error("No elements in heaps. Unable to get median.");
        }
        if (minHeap.size() == maxHeap.size() - 1)
        {
            return maxHeap.peek();
        }
        else if (maxHeap.size() == minHeap.size() - 1)
        {
            return minHeap.peek();
        }
        else if (minHeap.size() == maxHeap.size())
        {
            return static_cast<T>((minHeap.peek() + maxHeap.peek()) / 2);
        }
        else
        {
            throw std::runtime_error("Unable to get median");
        }
    }
};

#endif