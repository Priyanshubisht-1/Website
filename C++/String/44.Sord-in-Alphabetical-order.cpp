#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> names;

    // Input names
    std::cout << "Enter names (enter 'end' to finish input):" << std::endl;
    std::string name;
    while (true) {
        std::getline(std::cin, name);
        if (name == "end") {
            break;
        }
        names.push_back(name);
    }

    // Sort names in alphabetical order
    std::sort(names.begin(), names.end());

    // Output sorted names
    std::cout << "\nSorted names in alphabetical order:" << std::endl;
    for (const std::string& sorted_name : names) {
        std::cout << sorted_name << std::endl;
    }

    return 0;
}
