#include <iostream>
#include <string>

/**
 * Reverses a string manually using a loop.
 * @param str The input string.
 * @return The reversed string.
 */
std::string reverseString(const std::string str) {
    std::string reversed = "";
    // Loop from last character to first
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string result = reverseString(input);
    std::cout << "Reversed: " << result << std::endl;

    // Example test
    std::cout << "\nTest: reverseString(\"hello\") -> " << reverseString("hello") << " (expected: olleh)" << std::endl;
    return 0;
}