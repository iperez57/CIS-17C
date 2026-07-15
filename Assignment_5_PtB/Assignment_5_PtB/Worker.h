//Worker.h

#ifndef WORKER_H
#define WORKER_H

#include<string>

using namespace std;

class Worker
{
private:
	string name;
	double salary;
public:
	Worker();
	Worker(string s, double d);

	void setName(string n);
	void setSalary(double s);

	string getName();
	double getSalary();

	virtual double salaryPerWeek() = 0;
};

#endif