#include "invoice_detail.h"
#include <iostream>

int main()
{
	InvoiceDetail d(10, 10);
	std::cout<<d.get_extended_cost();

	return 0;
}