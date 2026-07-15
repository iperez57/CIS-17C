//Swe.h

#ifndef SWE_H
#define SWE_H

#include "Worker.h"

class Swe : public Worker
{
public:
	Swe();
	Swe(string n);

	double salaryPerWeek();
};

#endif