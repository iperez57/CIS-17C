//Swe.cpp

#include "SWE.h"

Swe::Swe() : Worker("", 108080)
{

}

Swe::Swe(string n) : Worker(n, 108080)
{

}

double Swe::salaryPerWeek()
{
	return getSalary() / 52;
}