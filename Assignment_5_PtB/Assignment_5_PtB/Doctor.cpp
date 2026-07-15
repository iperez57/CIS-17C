//Doctor.cpp

#include "Doctor.h"

Doctor::Doctor()
{
	setName("");
	setSalary(0);
}

Doctor::Doctor(string n, double d)
{
	setName(n);
	setSalary(d);
}