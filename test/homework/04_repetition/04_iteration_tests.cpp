#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test get_gc_content", "[get_gc_content]") {
    // Test case for get_gc_content
    const std::string dna_string = "AGCTATAG";
    double result = get_gc_content(dna_string);

    // Expected result (37.5% or 0.375)
    double expected_result = 0.375;

    // Check if the result matches the expected result with a tolerance of 0.001
    REQUIRE(std::abs(result - expected_result) < 0.001);
}