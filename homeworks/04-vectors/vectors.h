#include<string>
#include<vector>

using std::vector; using std::string;

/*
Write a value return function with a vector of ints list reference parameter
that returns the maximum value of the list

@param numbers is a reference to a vector of integers
@return the max value in the vector

*/
int get_max_from_vector(vector<int>& numbers);

/*
Write a value function sum_of_squares with a vector of ints list reference parameter
that computes the sum of the squares of the numbers in the vector. For example, 
a vector of ints with values 2, 3, 4 should return 4+9+16 which is 29.

WRITE THE PARAM AND RETURN COMMENTS BELOW(SEE MY EXAMPLE ABOVE)

*/
//write function prototype





/*
Write a value-return function replace with parameters reference to vector of strings , 
old string, and new_val string that replaces all occurences of old string with new_val 
string in a vector of strings

@param strings reference to a vector of strings (read/write)
@param old reference to a string read only
@param new_val reference to a string read only

*/
void replace(vector<string>& strings, const string& old, const string& new_val);
