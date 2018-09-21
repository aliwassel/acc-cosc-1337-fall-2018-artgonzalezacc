#include<iostream>
#include "basics.h"

using std::cout;

int main()
{
	//cout << sum_numbers(5, 5);
	int num1{ 0 }, num2{ 0 };

	const_pass_by_val_by_ref(num1, num2);
	cout << num1 << " " << num2;

	return 0;
}
