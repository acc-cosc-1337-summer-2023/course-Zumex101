#include "func.h"
#include <algorithm>

int get_vector_max_value(const std::vector<int>& vec) {
    if (vec.empty()) {
        return 0; 
    }

    return *std::max_element(vec.begin(), vec.end());
}

std::vector<int> get_square_of_each_element(const std::vector<int>& vec) {
    std::vector<int> squared_vec;
    squared_vec.reserve(vec.size());

    for (int num : vec) {
        squared_vec.push_back(num * num);
    }

    return squared_vec;
}
