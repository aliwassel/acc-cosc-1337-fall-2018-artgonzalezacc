//write include statement for vectors header
//write include statement for cout object
#include "vectors.h"
#include <iostream>


//dont forget using statement for cout object
int main() 
{
	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max
	vector<int> numbers = { 4,5,1,50,6,77,0 };
	std::cout<<"Get max from vector is: "<<get_max_from_vector(numbers)<<std::endl;

	//write code to call the sum_of_square function with argument
	//vector of values 2, 3, 4 and display result
	numbers = {2,3,4};
	std::cout << "Sum of squares: " << sum_of_squares(numbers)<<std::endl;

	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"
	vector<string> names = { "Joe", "joe", "mary" };
	replace(names, "joe", "John");
	for (auto n : names) 
	{
		std::cout << n << std::endl;
	}

	
	//write code to call is_prime with value 3 output result


	//write code to call vector_of_primes, save return value to a vector of ints
	//output each int in the return vector


	return 0;
}