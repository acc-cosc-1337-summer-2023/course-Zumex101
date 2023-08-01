#include <iostream>
#include "data_types.h"

int main() {
    // Step a and b
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Step c
    int result = multiply_numbers(num);
    std::cout << "Result 1: " << result << std::endl;

    // Step d
    int num1 = 4;

    // Step e
    result = multiply_numbers(num1);
    std::cout << "Result 2: " << result << std::endl;

    return 0;
}
