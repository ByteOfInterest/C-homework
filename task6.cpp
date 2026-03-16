#include <iostream>

/**
 * Recursively calculates the factorial of a non‑negative integer.
 * @param n The number (n >= 0).
 * @return n! (1 for n=0).
 */
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    // Test cases
    std::cout << "factorial(0) = " << factorial(0) << " (expected: 1)" << std::endl;
    std::cout << "factorial(1) = " << factorial(1) << " (expected: 1)" << std::endl;
    std::cout << "factorial(5) = " << factorial(5) << " (expected: 120)" << std::endl;
    std::cout << "factorial(7) = " << factorial(7) << " (expected: 5040)" << std::endl;
    return 0;
}