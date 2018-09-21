#include<math.h>
#include "dna.h"

using std::string;

int get_point_mutations(const string& dna1, const string& dna2)
{	
	if (dna1.size() != dna2.size()) 
	{
		return -1;
	}
	
	int hamming_distance = 0;

	for (std::size_t i = 0; i < dna1.size(); ++i) 
	{
		if (dna1[i] != dna2[i]) 
		{
			hamming_distance++;
		}
	}

	return hamming_distance;
}


//write function code for std::string get_dna_complement(std::string dna)
string get_dna_complement(string dna) 
{

	for (std::size_t i = 0; i < dna.size(); ++i) 
	{
		switch (dna[i]) 
		{
		case 'A':
			dna[i] = 'T';
			break;
		case 'T':
			dna[i] = 'A';
			break;
		case 'C':
			dna[i] = 'G';
			break;
		case 'G':
			dna[i] = 'C';
			break;
		default:
			break;
		}
	}

	return reverse_string(dna);
}

string reverse_string(const string& str)
{
	std::string reverse;
	
	for (std::size_t i = str.size()-1; i != -1; --i)
	{
		reverse.push_back(str[i]);
	}

	return reverse;
}

//write function code for std::string transcribe_dna_into_rna(std::string dna);
string transcribe_dna_into_rna(string dna)
{
	for (auto& s : dna) 
	{
		if (s == 'T') 
		{
			s = 'U';
		}
	}

	return dna;
}

double get_gc_content(const string& dna)
{
	auto size = dna.size(); //get the size of string let auto handle the data type
	auto gc_count{ 0 }; //initialize to 0 (int) let auto handle data type

	//for ranged loop, for each character in loop, s holds one char
	//auto determines data type in this case s is a char data type
	for (auto s : dna)
	{
		//in C++ logical and is && and logical or is ||
		//usage (and) condition1 && condition2 --- usage (or) condition1 || condition2 
		//write code to determine if s is 'C' or 'G' then increment gc_count by 1
		if (s == 'C' || s == 'G') 
		{
			gc_count++;
		}

	}

	//dividing two integers nets an integer
	//here we need to convert one of the integers to double to get double division
	//that is a result with decimal values
	//static_cast converts a data type from one to another
	//here temporarily convert size to double
	auto gc_content = (gc_count / static_cast<double>(size))*100;

	//custom function to round to a desired precision
	return round_to_precision(gc_content, 2);
}

double round_to_precision(double number, int precision)
{
	return (std::round(number * std::pow(10, precision))) / std::pow(10, precision);
}
