#include <unistd.h>
#include <string>
#include "includes/doctest.h"
#include "../includes/Utilities.hpp"

SCENARIO("Determine whether input is a fraction") {
    GIVEN("Multiple test strings")
    {
        std::string testInput1 = "4.5";
        std::string testInput2 = "77,89";
        std::string testInput3 = "0.999";
        std::string testInput4 = "0.0";
         //Invalid inputs:
        std::string testInput5 = "23";
        std::string testInput6 = "123..3";
        std::string testInput7 = "";
        std::string testInput8 = ".";
        std::string testInput9 = "0.";
        std::string testInput10 = "0.ab32";
        WHEN("The test inputs are processed")
        {
            THEN("The correct inputs are validated as fractions")
            {
                REQUIRE(isInputFraction(testInput1));
                REQUIRE(isInputFraction(testInput2));
                REQUIRE(isInputFraction(testInput3));
                REQUIRE(isInputFraction(testInput4));
            }
            THEN("The incorrect inputs are validated as not fractions")
            {
                REQUIRE_FALSE(isInputFraction(testInput5));
                REQUIRE_FALSE(isInputFraction(testInput6));
                REQUIRE_FALSE(isInputFraction(testInput7));
                REQUIRE_FALSE(isInputFraction(testInput8));
                REQUIRE_FALSE(isInputFraction(testInput9));
                REQUIRE_FALSE(isInputFraction(testInput10));
            }
        }
    }
}

SCENARIO("Determine whether input is integer") {
    GIVEN("Multiple test strings")
    {
        std::string testInput1 = "44";
        std::string testInput2 = "100";
        std::string testInput3 = "9999";
        std::string testInput4 = "0";
         //Invalid inputs:
        std::string testInput5 = "23.4";
        std::string testInput6 = "123,3";
        std::string testInput7 = "";
        std::string testInput8 = ".";
        std::string testInput9 = "0.";
        std::string testInput10 = "ab32";
        WHEN("The test inputs are processed")
        {
            THEN("The correct inputs are validated as integers")
            {
                REQUIRE(isInputInteger(testInput1));
                REQUIRE(isInputInteger(testInput2));
                REQUIRE(isInputInteger(testInput3));
                REQUIRE(isInputInteger(testInput4));
            }
            THEN("The incorrect inputs are validated as not integers")
            {
                REQUIRE_FALSE(isInputInteger(testInput5));
                REQUIRE_FALSE(isInputInteger(testInput6));
                REQUIRE_FALSE(isInputInteger(testInput7));
                REQUIRE_FALSE(isInputInteger(testInput8));
                REQUIRE_FALSE(isInputInteger(testInput9));
                REQUIRE_FALSE(isInputInteger(testInput10));
            }
        }
    }
}

SCENARIO("Determine whether input is integer") {
    GIVEN("Multiple test strings")
    {
        std::string testInput1 = "44";
        std::string testInput2 = "100";
        std::string testInput3 = "9999";
        std::string testInput4 = "0";
         //Invalid inputs:
        std::string testInput5 = "23.4";
        std::string testInput6 = "123,3";
        std::string testInput7 = "";
        std::string testInput8 = ".";
        std::string testInput9 = "0.";
        std::string testInput10 = "ab32";
        WHEN("The test inputs are processed")
        {
            THEN("The correct inputs are validated as integers")
            {
                REQUIRE(isInputInteger(testInput1));
                REQUIRE(isInputInteger(testInput2));
                REQUIRE(isInputInteger(testInput3));
                REQUIRE(isInputInteger(testInput4));
            }
            THEN("The incorrect inputs are validated as not integers")
            {
                REQUIRE_FALSE(isInputInteger(testInput5));
                REQUIRE_FALSE(isInputInteger(testInput6));
                REQUIRE_FALSE(isInputInteger(testInput7));
                REQUIRE_FALSE(isInputInteger(testInput8));
                REQUIRE_FALSE(isInputInteger(testInput9));
                REQUIRE_FALSE(isInputInteger(testInput10));
            }
        }
    }
}

SCENARIO("Determine whether input is integer") {
    GIVEN("Multiple test strings")
    {
        std::string testInput1 = "44";
        std::string testInput2 = "100";
        std::string testInput3 = "9999";
        std::string testInput4 = "0";
         //Invalid inputs:
        std::string testInput5 = "23.4";
        std::string testInput6 = "123,3";
        std::string testInput7 = "";
        std::string testInput8 = ".";
        std::string testInput9 = "0.";
        std::string testInput10 = "ab32";
        WHEN("The test inputs are processed")
        {
            THEN("The correct inputs are validated as integers")
            {
                REQUIRE(isInputInteger(testInput1));
                REQUIRE(isInputInteger(testInput2));
                REQUIRE(isInputInteger(testInput3));
                REQUIRE(isInputInteger(testInput4));
            }
            THEN("The incorrect inputs are validated as not integers")
            {
                REQUIRE_FALSE(isInputInteger(testInput5));
                REQUIRE_FALSE(isInputInteger(testInput6));
                REQUIRE_FALSE(isInputInteger(testInput7));
                REQUIRE_FALSE(isInputInteger(testInput8));
                REQUIRE_FALSE(isInputInteger(testInput9));
                REQUIRE_FALSE(isInputInteger(testInput10));
            }
        }
    }
}

SCENARIO("Split a string into a vector of strings given a delimiter") {
    GIVEN("Multiple test strings")
    {
        std::string testInput1 = "4.5 6.7 8.9 0.0";
        std::string testInput2 = "4.5   6.7    8.9     0.0";
        std::string testInput3 = "9494 6.7 9429 0";
        char delimiter = ' ';
        WHEN("The test inputs are processed")
        {
            std::vector<std::string> testInput1Tokens = split(testInput1, delimiter);
            std::vector<std::string> testInput2Tokens = split(testInput2, delimiter);
            std::vector<std::string> testInput3Tokens = split(testInput3, delimiter);
            THEN("The string is split into a vector of strings")
            {
                REQUIRE(testInput1Tokens == std::vector<std::string>{"4.5", "6.7", "8.9", "0.0"});
                REQUIRE(testInput2Tokens == std::vector<std::string>{"4.5", "6.7", "8.9", "0.0"});
                REQUIRE(testInput3Tokens == std::vector<std::string>{"9494", "6.7", "9429", "0"});
            }
        }
    }
}
