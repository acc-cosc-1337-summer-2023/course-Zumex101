#include <iostream>
#include <string>
#include "repetition.h"

using namespace std;

int main() {
    char choice;

    do {
        // Prompt the user to enter the DNA string
        cout << "Enter the DNA string: ";
        string dna_string;
        getline(cin, dna_string);

        // Calculate and display the GC-content
        double gc_content = get_gc_content(dna_string);
        cout << "GC-content of \"" << dna_string << "\" is: " << gc_content << "%" << endl;

        // Prompt the user if they want to continue
        cout << "Do you want to enter another DNA string? (Y/N): ";
        cin >> choice;
        cin.ignore(); // Ignore the remaining newline character after reading the choice

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
