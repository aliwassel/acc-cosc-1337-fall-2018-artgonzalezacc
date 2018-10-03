#ifndef  INVOICE_H
#define INVOICE_H
#include<vector>

#include "invoice_detail.h"

class Invoice 
{
public:
	void add_invoice_detail(InvoiceDetail detail);
	double get_total() const;

private:
	std::vector<InvoiceDetail> invoice_details;
};

#endif //INVOICE_H