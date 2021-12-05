#ifndef UTILITIES_HPP
#define UTILITIES_HPP
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <regex>

std::vector<std::string> &split(const std::string &input, char delimeter, std::vector<std::string> &elements)
{
    std::stringstream ss(input);
    std::string item;
    while (std::getline(ss, item, delimeter))
    {
        if (item.length() > 0)
        {
            elements.push_back(item);
        }
    }
    return elements;
}

std::vector<std::string> split(const std::string &input, char delimeter)
{
    std::vector<std::string> elements;
    split(input, delimeter, elements);
    return elements;
}

bool isInputFraction(const std::string &input) 
{
    std::regex delimiter("^(-?(\\d+)?(\\.|\\,)\\d+)$");
    return regex_match(input, delimiter);
}

bool isInputInteger(const std::string &input) 
{
    std::regex pattern("^(0|[1-9][0-9]*)$");
    return regex_match(input, pattern);
}

void print(std::vector<std::string> input)
{
    for (std::string s : input)
        std::cout << s << std::endl;
}


#endif