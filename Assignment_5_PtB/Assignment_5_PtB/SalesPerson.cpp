//SalesPerson.cpp

#include "SalesPerson.h"

SalesPerson::SalesPerson() : Worker("", 64310)
{

}

SalesPerson::SalesPerson(string n) : Worker(n, 64310)
{

}

double SalesPerson::salaryPerWeek()
{
	return getSalary() / 52;
}