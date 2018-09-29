#include "vectors.h"

int get_max_from_vector(vector<int>& numbers)
{
	int max = numbers[0];
	for (auto n : numbers) 
	{
		if (n > max) 
		{
			max = n;
		}
	}

	return max;
}

//write the code for sum_of_squares function here
long sum_of_squares(vector<int>& numbers)
{
	long sum{ 0 };
	for (auto n : numbers) 
	{
		sum += n * n;
	}

	return sum;
}

//write the code for function replace here
void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)
	for (auto& s : strings) 
	{
		if (s == old) 
		{
			s = new_val;
		}
	}
	   	 
}
/*
 if (n==1):
		return False
	elif (n==2):
		return True
	else:
		for x in range(2,n):
			if(n % x==0):
				return False
		return True
*/
//write is_prime function code here
bool is_prime(int number)
{
	if (number == 1) 
	{
		return false;
	}
	else if(number == 2)
	{
		return true;
	}
	else 
	{
		for (int i = 2; i < number; ++i) 
		{
			if (number % i == 0) 
			{
				return false;
			}
		}
		return true;
	}
}

//write vector_of_primes function code here
vector<int> vector_of_primes(int number)
{
	vector<int> primes;

	for (int i = 1; i < number; ++i)
	{
		if (is_prime(i)) 
		{
			primes.push_back(i);
		}
	}

	return primes;
}






