#include <iostream>
#include <string>

/**
 * Converts a positive integer to its binary representation using only
 * modulo and integer division.
 * @param number A positive integer (if 0, returns "0" for safety).
 * @return Binary string.
 */
std::string intToBinary(int number) {
    if (number == 0) {
        return "0";
    }

    std::string binary = "";
    while (number > 0) {
        int remainder = number % 2;               // Get least significant bit
        binary = std::to_string(remainder) + binary; // Prepend to string
        number /= 2;                               // Remove that bit
    }
    return binary;
}

int main() {
    // Test cases
    std::cout << "intToBinary(5)  -> " << intToBinary(5) << "  (expected: 101)" << std::endl;
    std::cout << "intToBinary(10) -> " << intToBinary(10) << " (expected: 1010)" << std::endl;
    std::cout << "intToBinary(1)  -> " << intToBinary(1) << "   (expected: 1)" << std::endl;
    std::cout << "intToBinary(0)  -> " << intToBinary(0) << "   (expected: 0)" << std::endl;
    return 0;
}