//Lawyer.h

#ifndef LAWYER_H
#define LAWYER_H

#include "Worker.h"

class Lawyer : public Worker
{
public:
	Lawyer();
	Lawyer(string n);

	double salaryPerWeek();
};

#endif