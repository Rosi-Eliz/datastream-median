#include <iostream>
#include <algorithm>
#include "Median.hpp"
#include "Utilities.hpp"

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