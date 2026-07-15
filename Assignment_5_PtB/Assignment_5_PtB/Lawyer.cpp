//Lawyer.cpp

#include "Lawyers.h"

Lawyer::Lawyer() : Worker("", 144230)
{

}

Lawyer::Lawyer(string n) : Worker(n, 144230)
{

}

double Lawyer::salaryPerWeek()
{
	return getSalary() / 52;
}