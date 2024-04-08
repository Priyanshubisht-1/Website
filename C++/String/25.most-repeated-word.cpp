#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

std::string most_repeated_word(const std::string &filename)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Error: Unable to open file." << std::endl;
        return "";
    }

    std::unordered_map<std::string, int> word_count;
    std::string line, word;

    // Read the file line by line
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        // Tokenize each line into words
        while (iss >> word)
        {
            // Increment the count for each word
            word_count[word]++;
        }
    }

    // Find the most repeated word
    int max_count = 0;
    std::string most_repeated;
    for (const auto &pair : word_count)
    {
        if (pair.second > max_count)
        {
            max_count = pair.second;
            most_repeated = pair.first;
        }
    }

    return most_repeated;
}

int main()
{
    std::string filename;

    // Input filename
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    // Find the most repeated word in the file
    std::string most_repeated = most_repeated_word(filename);

    if (!most_repeated.empty())
    {
        std::cout << "Most repeated word in the file: " << most_repeated << std::endl;
    }

    return 0;
}
