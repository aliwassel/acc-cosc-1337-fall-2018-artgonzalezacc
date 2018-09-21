#include "basics.h"

int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

int multiply_numbers(int num1, int num2) 
{
	return num1 * num2;
}

void pass_by_val_by_ref(int val, int& ref)
{
	val = 99;
	ref = 99;
}

void const_pass_by_val_by_ref(int val, const int & ref)
{
	val = 99;
	//ref = 99; can't update ref because it's read only
}

