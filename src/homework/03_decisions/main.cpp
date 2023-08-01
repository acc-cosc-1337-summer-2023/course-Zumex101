#include <iostream>
#include "decisions.h"

int main() {
    int numerical_grade;
    std::cout << "Enter numerical grade: ";
    std::cin >> numerical_grade;

    std::string letter_grade_switch = get_letter_grade_using_switch(numerical_grade);
    std::string letter_grade_if_else = get_letter_grade_using_if_else(numerical_grade);

    std::cout << "Using switch statement: " << letter_grade_switch << std::endl;
    std::cout << "Using if-else statements: " << letter_grade_if_else << std::endl;

    return 0;
}
