#include <iostream>
#include <vector>
#include "func.h"

int main() {
    std::vector<int> vec_max = {5, 7, -1, 99, -100, 10};
    std::vector<int> vec_square = {6, 1, 8, 9, 4};

    int choice;
    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1-Get max value" << std::endl;
        std::cout << "2-Get square of elements" << std::endl;
        std::cout << "3-Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Max value: " << get_vector_max_value(vec_max) << std::endl;
                break;
            case 2: {
                std::vector<int> squared_values = get_square_of_each_element(vec_square);
                std::cout << "Squared values: ";
                for (int num : squared_values) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            }
            case 3:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

    } while (choice != 3);

    return 0;
}
