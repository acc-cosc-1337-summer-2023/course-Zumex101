#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test get_letter_grade_using_switch function") {
    SECTION("Numerical grade 95 should return 'A'") {
        REQUIRE(get_letter_grade_using_switch(95) == "A");
    }

    SECTION("Numerical grade 85 should return 'B'") {
        REQUIRE(get_letter_grade_using_switch(85) == "B");
    }

    SECTION("Numerical grade 75 should return 'C'") {
        REQUIRE(get_letter_grade_using_switch(75) == "C");
    }

    SECTION("Numerical grade 65 should return 'D'") {
        REQUIRE(get_letter_grade_using_switch(65) == "D");
    }

    SECTION("Numerical grade 50 should return 'F'") {
        REQUIRE(get_letter_grade_using_switch(50) == "F");
    }
}

TEST_CASE("Test get_letter_grade_using_if_else function") {
    SECTION("Numerical grade 95 should return 'A'") {
        REQUIRE(get_letter_grade_using_if_else(95) == "A");
    }

    SECTION("Numerical grade 85 should return 'B'") {
        REQUIRE(get_letter_grade_using_if_else(85) == "B");
    }

    SECTION("Numerical grade 75 should return 'C'") {
        REQUIRE(get_letter_grade_using_if_else(75) == "C");
    }

    SECTION("Numerical grade 65 should return 'D'") {
        REQUIRE(get_letter_grade_using_if_else(65) == "D");
    }

    SECTION("Numerical grade 50 should return 'F'") {
        REQUIRE(get_letter_grade_using_if_else(50) == "F");
    }
}
