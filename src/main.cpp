#include <iostream>
#include <string>
#include <regex>
#include <sstream>
#include <algorithm>
#include "Median.hpp"

bool isInputFraction(const std::string &input) 
{
    std::regex delimiter("^[-]?(0|[1-9]+)(.|,)[0-9]*$");
    return regex_match(input, delimiter);
}

bool isInputInteger(const std::string &input) 
{
    std::regex pattern("^(0|[1-9][0-9]*)$");
    return regex_match(input, pattern);
}

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

void print(std::vector<std::string> input)
{
    for (std::string s : input)
        std::cout << s << std::endl;
}

int main()
{
    std::cout << "Enter your values, separated by a blank space: " << std::endl;
    std::string input;
    getline(std::cin, input);
    auto tokens = split(input, ' ');

    if (std::all_of(tokens.begin(), tokens.end(), [](const std::string &token)
                    { return isInputFraction(token); }))
    {
        std::vector<double> elements;
        for (std::string s : tokens)
        {
            elements.push_back(std::stod(s));
        }
        Median<double> median;
        for (int element : elements)
        {
            median.addElement(element);
        }

        std::cout << "Median: " << median.getMedian() << std::endl;
    }
    else if (std::all_of(tokens.begin(), tokens.end(), [](const std::string &token)
                         { return isInputInteger(token); }))
    {
        std::vector<int> elements;
        for (std::string s : tokens)
        {
            elements.push_back(std::stoi(s));
        }

        Median<int> median;
        for (int element : elements)
        {
            median.addElement(element);
        }
        std::cout << "Median: " << median.getMedian() << std::endl;
    }
    else
    {
        print(tokens);
        throw std::runtime_error("Invalid input");
    }
    return 0;
}