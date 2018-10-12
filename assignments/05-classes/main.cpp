#include "invoice_progress.h"
#include "invoice_utility.h"
#include <iostream>
#include <vector>

int main()
{
	InvoiceUtility invu(25);
	invu.add_invoice_detail(InvoiceDetail(100, 1));

	InvoiceProgress invp(250);
	invp.add_invoice_detail(InvoiceDetail(100, 1));

	std::cout<<invu.get_total()<< std::endl;
	
	std::cout << invp.get_total()<< std::endl;

	Invoice& u = invu;
	Invoice& p = invp;
	
	std::cout << u.get_total()<<std::endl;
	std::cout << p.get_total()<< std::endl;


	return 0;
}