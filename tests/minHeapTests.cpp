#include <unistd.h>
#include "includes/doctest.h"
#include "../includes/MinHeap.hpp"

SCENARIO("Populate min heap with different ascending integers") {
    GIVEN("An empty minHeap is constructed")
    {
        MinHeap<int> minHeap;
        WHEN("A few ordered integers are inserted")
        {
            minHeap.insertElement(1);
            minHeap.insertElement(2);
            minHeap.insertElement(3);
            minHeap.insertElement(4);
            THEN("The elements are sorted in ascending order")
            {
                REQUIRE(minHeap.extractMin() == 1);
                REQUIRE(minHeap.extractMin() == 2);
                REQUIRE(minHeap.extractMin() == 3);
                REQUIRE(minHeap.extractMin() == 4);
            }
        }
    }
}

SCENARIO("Populate min heap with different descending integers") {
    GIVEN("An empty minHeap is constructed")
    {
        MinHeap<int> minHeap;
        WHEN("A few ordered integers are inserted")
        {
            minHeap.insertElement(4);
            minHeap.insertElement(3);
            minHeap.insertElement(2);
            minHeap.insertElement(1);
            THEN("The elements are sorted in ascending order")
            {
                REQUIRE(minHeap.extractMin() == 1);
                REQUIRE(minHeap.extractMin() == 2);
                REQUIRE(minHeap.extractMin() == 3);
                REQUIRE(minHeap.extractMin() == 4);
            }
        }
    }
}

SCENARIO("Populate min heap with different ascending fractions") {
    GIVEN("An empty minHeap is constructed")
    {
        MinHeap<double> minHeap;
        WHEN("A few ordered fractions are inserted")
        {
            minHeap.insertElement(1.5);
            minHeap.insertElement(2.5);
            minHeap.insertElement(3.5);
            minHeap.insertElement(4.5);
            THEN("The elements are sorted in ascending order")
            {
                REQUIRE(minHeap.extractMin() == 1.5);
                REQUIRE(minHeap.extractMin() == 2.5);
                REQUIRE(minHeap.extractMin() == 3.5);
                REQUIRE(minHeap.extractMin() == 4.5);
            }
        }
    }
}

SCENARIO("Populate min heap with different descending fractions") {
    GIVEN("An empty minHeap is constructed")
    {
        MinHeap<double> minHeap;
        WHEN("A few ordered fractions are inserted")
        {
            minHeap.insertElement(4.5);
            minHeap.insertElement(3.5);
            minHeap.insertElement(2.5);
            minHeap.insertElement(1.5);
            THEN("The elements are sorted in ascending order")
            {
                REQUIRE(minHeap.extractMin() == 1.5);
                REQUIRE(minHeap.extractMin() == 2.5);
                REQUIRE(minHeap.extractMin() == 3.5);
                REQUIRE(minHeap.extractMin() == 4.5);
            }
        }
    }
}

SCENARIO("Populate min heap with the same integers") {
    GIVEN("An empty minHeap is constructed")
    {
        MinHeap<int> minHeap;
        WHEN("A few equal integers are inserted")
        {
            minHeap.insertElement(1);
            minHeap.insertElement(1);
            minHeap.insertElement(1);
            minHeap.insertElement(1);
            THEN("The elements remain in the same order")
            {
                REQUIRE(minHeap.extractMin() == 1);
                REQUIRE(minHeap.extractMin() == 1);
                REQUIRE(minHeap.extractMin() == 1);
                REQUIRE(minHeap.extractMin() == 1);
            }
        }
    }
}

SCENARIO("Populate min heap with the same fractions") {
    GIVEN("An empty minHeap is constructed")
    {
        MinHeap<double> minHeap;
        WHEN("A few equal fractions are inserted")
        {
            minHeap.insertElement(1.0);
            minHeap.insertElement(1.0);
            minHeap.insertElement(1.0);
            minHeap.insertElement(1.0);
            THEN("The elements remain in the same order")
            {
                REQUIRE(minHeap.extractMin() == 1.0);
                REQUIRE(minHeap.extractMin() == 1.0);
                REQUIRE(minHeap.extractMin() == 1.0);
                REQUIRE(minHeap.extractMin() == 1.0);
            }
        }
    }
}