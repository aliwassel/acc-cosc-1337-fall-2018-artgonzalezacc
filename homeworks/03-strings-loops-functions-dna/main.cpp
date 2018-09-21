#include "dna.h"
#include<iostream>
#include<string>

using std::cout; using std::endl;

int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	//Example:
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "GAGCCTACTAACGGGAT");
	cout << point_mutation << endl << endl;

	auto complement = get_dna_complement("AAAACCCGGT");
	cout << complement << endl << endl;

	auto rna = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
	cout << rna << endl << endl;

	auto gc_content = get_gc_content("CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT");
	cout << gc_content << endl << endl;

	return 0;
}