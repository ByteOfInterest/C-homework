#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename;
    std::cout << "Enter the name of the text file: ";
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
        return 1;
    }

    int wordCount = 0;
    std::string word;
    // Read word by word using >> operator
    while (file >> word) {
        ++wordCount;
    }

    file.close();
    std::cout << "Word count: " << wordCount << std::endl;
    return 0;
}