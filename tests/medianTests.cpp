#include <unistd.h>
#include "includes/doctest.h"
#include "../includes/Median.hpp"

SCENARIO("Populate median with different ascending integers") {
    GIVEN("An empty median object is constructed")
    {
        Median<int> median;
        WHEN("An even number of ordered integers are added")
        {
            median.addElement(1);
            median.addElement(2);
            median.addElement(3);
            median.addElement(4);
            THEN("The median is extracted")
            {
                REQUIRE(median.getMedian() == 2);
            }
        }
    }
}

SCENARIO("Populate median with different ascending fractions") {
    GIVEN("An empty median object is constructed")
    {
        Median<double> median;
        WHEN("An even number of ordered fractions are added")
        {
            median.addElement(1.0);
            median.addElement(2.0);
            median.addElement(3.0);
            median.addElement(4.0);
            THEN("The median is extracted")
            {
                REQUIRE(median.getMedian() == 2.5);
            }
        }
    }
}

SCENARIO("Populate median with different ascending integers") {
    GIVEN("An empty median object is constructed")
    {
        Median<int> median;
        WHEN("An odd number of ordered integers are added")
        {
            median.addElement(2);
            median.addElement(4);
            median.addElement(7);
            median.addElement(9);
            median.addElement(11);
            THEN("The median is extracted")
            {
                REQUIRE(median.getMedian() == 7);
            }
        }
    }
}

SCENARIO("Populate median with different ascending fractions") {
    GIVEN("An empty median object is constructed")
    {
        Median<double> median;
        WHEN("An odd number of ordered fractions are added")
        {
            median.addElement(2.0);
            median.addElement(4.0);
            median.addElement(7.0);
            median.addElement(9.0);
            median.addElement(11.0);
            THEN("The median is extracted")
            {
                REQUIRE(median.getMedian() == 7.0);
            }
        }
    }
}

SCENARIO("Populate median with equal integers") {
    GIVEN("An empty median object is constructed")
    {
        Median<int> median;
        WHEN("An odd number of equal integers are added")
        {
            median.addElement(5);
            median.addElement(5);
            median.addElement(5);
            median.addElement(5);
            median.addElement(5);
            THEN("The median is extracted")
            {
                REQUIRE(median.getMedian() == 5);
            }
        }
    }
}

SCENARIO("Populate median with equal fractions") {
    GIVEN("An empty median object is constructed")
    {
        Median<double> median;
        WHEN("An odd number of equal fractions are added")
        {
            median.addElement(5.5);
            median.addElement(5.5);
            median.addElement(5.5);
            median.addElement(5.5);
            median.addElement(5.5);
            THEN("The median is extracted")
            {
                REQUIRE(median.getMedian() == 5.5);
            }
        }
    }
}