#include <iostream>
#include "MaxHeap.hpp"
#include "MinHeap.hpp"

int main() {
    MaxHeap<int> maxHeap;
    MinHeap<int> minHeap;

    minHeap.insertElement(5);
    minHeap.insertElement(3);
    minHeap.insertElement(1);
    minHeap.insertElement(4);
    minHeap.insertElement(2);

    maxHeap.insertElement(5);
    maxHeap.insertElement(3);
    maxHeap.insertElement(1);
    maxHeap.insertElement(4);
    maxHeap.insertElement(2);

    std::cout<<"Minheap peek: " << minHeap.peek()<<std::endl;
    std::cout<<"Maxheap peek: " << maxHeap.peek()<<std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}