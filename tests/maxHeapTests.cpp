#include <unistd.h>
#include "includes/doctest.h"
#include "../includes/MaxHeap.hpp"

SCENARIO("Populate max heap with different ascending integers") {
    GIVEN("An empty maxHeap is constructed")
    {
        MaxHeap<int> maxHeap;
        WHEN("A few ordered integers are inserted")
        {
            maxHeap.insertElement(1);
            maxHeap.insertElement(2);
            maxHeap.insertElement(3);
            maxHeap.insertElement(4);
            THEN("The elements are sorted in descending order")
            {
                REQUIRE(maxHeap.extractMax() == 4);
                REQUIRE(maxHeap.extractMax() == 3);
                REQUIRE(maxHeap.extractMax() == 2);
                REQUIRE(maxHeap.extractMax() == 1);
            }
        }
    }
}

SCENARIO("Populate max heap with different descending integers") {
    GIVEN("An empty maxHeap is constructed")
    {
        MaxHeap<int> maxHeap;
        WHEN("A few ordered integers are inserted")
        {
            maxHeap.insertElement(4);
            maxHeap.insertElement(3);
            maxHeap.insertElement(2);
            maxHeap.insertElement(1);
            THEN("The elements remain in the same order")
            {
                REQUIRE(maxHeap.extractMax() == 4);
                REQUIRE(maxHeap.extractMax() == 3);
                REQUIRE(maxHeap.extractMax() == 2);
                REQUIRE(maxHeap.extractMax() == 1);
            }
        }
    }
}

SCENARIO("Populate max heap with different ascending fractions") {
    GIVEN("An empty maxHeap is constructed")
    {
        MaxHeap<double> maxHeap;
        WHEN("A few ordered fractions are inserted")
        {
            maxHeap.insertElement(1.5);
            maxHeap.insertElement(2.5);
            maxHeap.insertElement(3.5);
            maxHeap.insertElement(4.5);
            THEN("The elements are sorted in ascending order")
            {
                REQUIRE(maxHeap.extractMax() == 4.5);
                REQUIRE(maxHeap.extractMax() == 3.5);
                REQUIRE(maxHeap.extractMax() == 2.5);
                REQUIRE(maxHeap.extractMax() == 1.5);
            }
        }
    }
}

SCENARIO("Populate max heap with different descending fractions") {
    GIVEN("An empty maxHeap is constructed")
    {
        MaxHeap<double> maxHeap;
        WHEN("A few ordered fractions are inserted")
        {
            maxHeap.insertElement(4.5);
            maxHeap.insertElement(3.5);
            maxHeap.insertElement(2.5);
            maxHeap.insertElement(1.5);
            THEN("The elements are sorted in ascending order")
            {
                REQUIRE(maxHeap.extractMax() == 4.5);
                REQUIRE(maxHeap.extractMax() == 3.5);
                REQUIRE(maxHeap.extractMax() == 2.5);
                REQUIRE(maxHeap.extractMax() == 1.5);
            }
        }
    }
}

SCENARIO("Populate max heap with the same integers") {
    GIVEN("An empty maxHeap is constructed")
    {
        MaxHeap<int> maxHeap;
        WHEN("A few equal integers are inserted")
        {
            maxHeap.insertElement(1);
            maxHeap.insertElement(1);
            maxHeap.insertElement(1);
            maxHeap.insertElement(1);
            THEN("The elements remain in the same order")
            {
                REQUIRE(maxHeap.extractMax() == 1);
                REQUIRE(maxHeap.extractMax() == 1);
                REQUIRE(maxHeap.extractMax() == 1);
                REQUIRE(maxHeap.extractMax() == 1);
            }
        }
    }
}

SCENARIO("Populate max heap with the same fractions") {
    GIVEN("An empty maxHeap is constructed")
    {
        MaxHeap<double> maxHeap;
        WHEN("A few equal fractions are inserted")
        {
            maxHeap.insertElement(1.0);
            maxHeap.insertElement(1.0);
            maxHeap.insertElement(1.0);
            maxHeap.insertElement(1.0);
            THEN("The elements remain in the same order")
            {
                REQUIRE(maxHeap.extractMax() == 1.0);
                REQUIRE(maxHeap.extractMax() == 1.0);
                REQUIRE(maxHeap.extractMax() == 1.0);
                REQUIRE(maxHeap.extractMax() == 1.0);
            }
        }
    }
}