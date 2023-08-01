#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_vector_max_value function", "[get_vector_max_value]") {
    SECTION("Test with vector of positive integers") {
        std::vector<int> vec1 = {5, 7, -1, 99, -100, 10};
        REQUIRE(get_vector_max_value(vec1) == 99);
    }

    SECTION("Test with vector of negative integers") {
        std::vector<int> vec2 = {-50, 0, -51, 50, -99, -100};
        REQUIRE(get_vector_max_value(vec2) == 50);
    }
}

TEST_CASE("Test get_square_of_each_element function", "[get_square_of_each_element]") {
    SECTION("Test with vector of positive integers") {
        std::vector<int> vec1 = {3, 7, 2, 5, 10};
        std::vector<int> expected_result1 = {9, 49, 4, 25, 100};
        REQUIRE(get_square_of_each_element(vec1) == expected_result1);
    }

    SECTION("Test with vector of mixed integers") {
        std::vector<int> vec2 = {6, 1, 8, 9, 4};
        std::vector<int> expected_result2 = {36, 1, 64, 81, 16};
        REQUIRE(get_square_of_each_element(vec2) == expected_result2);
    }
}