#include "invoice_detail.h"

double InvoiceDetail::get_extended_cost() const
{
	return cost * units;
}

std::istream & operator>>(std::istream & in, InvoiceDetail & d)
{
	std::cout << "Enter cost: ";
	in >> d.cost;
	std::cout << "Enter units: ";
	in >> d.units;

	return in;
}
