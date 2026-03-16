#include <iostream>
#include <vector>
#include <algorithm> // for std::find

void display(const std::vector<int>& vec) {
    std::cout << "Current vector: [";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::vector<int> vec = {1, 3, 2, 4}; // initial values

    int choice;
    do {
        std::cout << "\n--- Menu ---\n";
        std::cout << "1. Insert element at end\n";
        std::cout << "2. Remove element by value (first occurrence)\n";
        std::cout << "3. Display vector\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                vec.push_back(value);
                std::cout << "Inserted.\n";
                break;
            }
            case 2: {
                int value;
                std::cout << "Enter value to remove: ";
                std::cin >> value;
                auto it = std::find(vec.begin(), vec.end(), value);
                if (it != vec.end()) {
                    vec.erase(it);
                    std::cout << "Removed.\n";
                } else {
                    std::cout << "Value not found.\n";
                }
                break;
            }
            case 3:
                display(vec);
                break;
            case 4:
                std::cout << "Goodbye.\n";
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}