//SalesPerson.h

#ifndef SALESPERSON_H
#define SALESPERSON_H

#include "Worker.h"

class SalesPerson : public Worker
{
public:
	SalesPerson();
	SalesPerson(string n);

	double salaryPerWeek();
};

#endif