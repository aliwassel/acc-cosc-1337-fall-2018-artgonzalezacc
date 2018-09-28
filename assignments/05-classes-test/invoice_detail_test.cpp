#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice_detail.h"

TEST_CASE("TEST config")
{
	InvoiceDetail detail(10, 10);
	REQUIRE(detail.get_extended_cost() == 100);
}
