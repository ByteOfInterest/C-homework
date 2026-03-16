#include <iostream>
#include <string>

/**
 * Converts a positive integer to its binary representation as a string.
 * Uses only modulo and integer division (no bitwise operators or std::bitset).
 *
 * @param number Positive integer to convert.
 * @return Binary string (e.g., "101" for 5).
 */
std::string intToBinary(int number) {
    // Special case: number is 0
    if (number == 0) {
        return "0";
    }

    std::string binary = "";
    while (number > 0) {
        // Get the least significant bit (remainder when divided by 2)
        int bit = number % 2;
        // Prepend the bit to the binary string (build from right to left)
        binary = std::to_string(bit) + binary;
        // Update number by integer division by 2 (shift right)
        number /= 2;
    }
    return binary;
}


int main() {
    std::cout << intToBinary(5) << std::endl;   // Output: 101
    std::cout << intToBinary(10) << std::endl;  // Output: 1010
    return 0;
}