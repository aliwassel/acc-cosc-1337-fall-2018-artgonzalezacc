#include "invoice.h"
#include <iostream>

int main()
{
	Invoice invoice;

	InvoiceDetail d(10, 10);
	invoice.add_invoice_detail(d);
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));
	
	std::cout << invoice.get_total();
	

	return 0;
}