#include <iostream>

int main() {
    // Initialize array with 10 integers (e.g., multiples of 10)
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int index, newValue;

    std::cout << "Current array: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter index to update (0-9): ";
    std::cin >> index;
    if (index < 0 || index >= 10) {
        std::cout << "Invalid index!" << std::endl;
        return 1;
    }

    std::cout << "Enter new value: ";
    std::cin >> newValue;

    arr[index] = newValue;

    std::cout << "Updated array: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}