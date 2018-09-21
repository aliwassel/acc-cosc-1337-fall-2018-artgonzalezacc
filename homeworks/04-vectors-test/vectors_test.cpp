#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"


//write test case for get_max_from_vector with a vector of ints 
//with values 4, 5, 1, 50, 6, 77, 0 result should be 77
//with values 99, 1000, 10, 500, 66, 770, 10 result should be 1000




//write test case for sum_of_squares with a vector of ints 
//with values 2, 3, 4 result should be 29
//with values 2, 3, 4 , 5 result should be 54





//test case for replace function
TEST_CASE("Test for replace vector element") 
{
	vector <string>  names{"Joe", "joe", "mary"};
	replace(names, "joe", "John");

	REQUIRE(names[1] == "John");

	names[1] = "sam";
	names.push_back("sam");
	names.push_back("Floyd");
	names.push_back("Jim");
	names.push_back("sam");

	replace(names, "sam", "Pam");

	REQUIRE(names[1] == "Pam");
	REQUIRE(names[3] == "Pam");
	REQUIRE(names[6] == "Pam");
}
