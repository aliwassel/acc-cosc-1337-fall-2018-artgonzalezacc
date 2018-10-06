#include "invoice.h"
#include <iostream>
#include <vector>

int main()
{
	int inv_choice = 1;

	Invoice invoice;
	int choice = 1;

	while (choice == 1)
	{
		InvoiceDetail detail;
		std::cin >> detail;
		invoice.add_invoice_detail(detail);

		std::cout << "Enter 1 to enter another: ";
		std::cin >> choice;
	}


	Invoice invoice1;
	choice = 1;

	while (choice == 1)
	{
		InvoiceDetail detail;
		std::cin >> detail;
		invoice1.add_invoice_detail(detail);

		std::cout << "Enter 1 to enter another: ";
		std::cin >> choice;
	}

//	Invoice result = invoice + invoice1;
	

	Invoice invoice3;
	invoice3.add_invoice_detail(InvoiceDetail(100, 1));
	std::vector<Invoice> invoices{ invoice, invoice1, invoice3 };

	Invoice result;
	for (auto i : invoices) 
	{
		std::cout << i.get_total() << std::endl;
		result += i;
	}
	std::cout << result.get_total() << std::endl;


	std::cout <<"total: " << result.get_total();

	return 0;
}