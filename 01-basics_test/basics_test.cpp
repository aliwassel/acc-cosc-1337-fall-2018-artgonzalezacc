#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "basics.h"

TEST_CASE("Test sum_numbers", "[1,5,10]") {
	REQUIRE(sum_numbers(1, 0) == 1);
	REQUIRE(sum_numbers(2, 3) == 5);
	REQUIRE(sum_numbers(5, 5) == 10);
}

TEST_CASE("Test multiply_numbers", "[4,25,100]") {
	REQUIRE(multiply_numbers(2, 2) == 4);
	REQUIRE(multiply_numbers(5, 5) == 25);
	REQUIRE(multiply_numbers(10, 10) == 100);
}
