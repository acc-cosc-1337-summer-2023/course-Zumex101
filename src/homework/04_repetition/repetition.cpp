#include "repetition.h"
#include <algorithm>
#include <iostream>

// Function to calculate the GC content of a DNA string
double get_gc_content(const std::string& dna_string) {
    int gc_count = 0;
    for (char base : dna_string) {
        if (base == 'C' || base == 'G') {
            gc_count++;
        }
    }

    double gc_content = (static_cast<double>(gc_count) / dna_string.length()) * 100.0;
    return gc_content;
}

// Function to find the maximum number of consecutive repetitions of the same character in a DNA string
int get_repetition_count(const std::string& dna_string) {
    int repetition_count = 0;
    int current_repetition = 1;

    for (size_t i = 1; i < dna_string.length(); ++i) {
        if (dna_string[i] == dna_string[i - 1]) {
            current_repetition++;
        } else {
            repetition_count = std::max(repetition_count, current_repetition);
            current_repetition = 1;
        }
    }

    repetition_count = std::max(repetition_count, current_repetition);

    return repetition_count;
}

// Function to reverse a DNA string
std::string get_reverse_string(const std::string& dna_string) {
    std::string reverse_dna = dna_string;
    std::reverse(reverse_dna.begin(), reverse_dna.end());
    return reverse_dna;
}
