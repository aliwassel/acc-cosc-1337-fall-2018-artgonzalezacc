#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"


//write test case for get_max_from_vector with a vector of ints 
//with values 4, 5, 1, 50, 6, 77, 0 result should be 77
//with values 99, 1000, 10, 500, 66, 770, 10 result should be 1000
TEST_CASE("Test get max from vector") 
{
	vector<int> numbers = {4,5,1,50,6,77,0};
	REQUIRE(get_max_from_vector(numbers) == 77);

	numbers = { 99, 1000, 10, 500, 66, 770, 10 };
	REQUIRE(get_max_from_vector(numbers) == 1000);
}



//write test case for sum_of_squares with a vector of ints 
//with values 2, 3, 4 result should be 29
//with values 2, 3, 4 , 5 result should be 54
TEST_CASE("Test sum of squares")
{
	vector<int> numbers = {2,3,4};
	REQUIRE(sum_of_squares(numbers) == 29);

	numbers.push_back(5);
	REQUIRE(sum_of_squares(numbers) == 54);
}



//test case for replace function
TEST_CASE("Test for replace vector element")
{
	vector <string>  names{ "Joe", "joe", "mary" };
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


//write test case for is_prime here with
//function argument 3 result should be true
//function argument 4 result should be false
TEST_CASE("Test is prime") 
{
	REQUIRE(is_prime(3) == true);
	REQUIRE(is_prime(4) == false);
}




//write test case for vector_of_primes here with
//argument 10 return vector should have the following items 2 3 5 7
//argument 50 return vector should have the following items
//2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
TEST_CASE("Test vector of primes") 
{
	vector<int> primes_up_to_10{ 2,3,5,7 };

	vector<int> primes = vector_of_primes(10);
	REQUIRE(primes_up_to_10.size() == primes.size());

	for (std::size_t i = 0; i <  primes_up_to_10.size(); ++i)
	{
		REQUIRE(primes_up_to_10[i] == primes[i]);
	}

	//primes up to 50 test
	vector<int> primes_up_to_50{ 2, 3 ,5, 7 ,11, 13, 17 ,19, 23, 29, 31, 37, 41, 43, 47 };
	
	primes = vector_of_primes(50);
	
	for (std::size_t i = 0; i < primes_up_to_50.size(); ++i)
	{
		REQUIRE(primes_up_to_50[i] == primes[i]);
	}
}
