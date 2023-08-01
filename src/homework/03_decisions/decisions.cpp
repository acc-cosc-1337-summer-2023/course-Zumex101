#include "decisions.h"

std::string get_letter_grade_using_switch(int numerical_grade) {
    std::string letter_grade;

  
    switch (numerical_grade / 10) {
        case 10:
        case 9:
            letter_grade = "A";
            break;
        case 8:
            letter_grade = "B";
            break;
        case 7:
            letter_grade = "C";
            break;
        case 6:
            letter_grade = "D";
            break;
        default:
            letter_grade = "F";
            break;
    }

    return letter_grade;
}

std::string get_letter_grade_using_if_else(int numerical_grade) {
    std::string letter_grade;

    if (numerical_grade >= 90) {
        letter_grade = "A";
    } else if (numerical_grade >= 80) {
        letter_grade = "B";
    } else if (numerical_grade >= 70) {
        letter_grade = "C";
    } else if (numerical_grade >= 60) {
        letter_grade = "D";
    } else {
        letter_grade = "F";
    }

    return letter_grade;
}
