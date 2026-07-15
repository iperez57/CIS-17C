//Doctor.cpp

#include "Doctor.h"

Doctor::Doctor() : Worker("", 294000)
{

}

Doctor::Doctor(string n) : Worker(n, 294000)
{

}

double Doctor::salaryPerWeek()
{
	return getSalary() / 52;
}