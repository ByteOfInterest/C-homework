#include <iostream>

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            } else {
                std::cout << "Result: " << num1 / num2 << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
    }
    return 0;
}