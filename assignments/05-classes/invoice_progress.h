#ifndef  INVOICE_PROGRESS_H
#define INVOICE_PROGRESS_H

#include "invoice.h"

class InvoiceProgress : public Invoice 
{
public:
	InvoiceProgress(double fp) : fixed_price(fp) {}
	double get_total()const;
private:
	double fixed_price;
};

#endif //INVOICE_PROGRESS_H

