//Doctor.h

#ifndef DOCTOR_H
#define DOCTOR_H

#include "Worker.h"

class Doctor : public Worker
{
public:
	Doctor();
	Doctor(string n);

	double salaryPerWeek();
};

#endif