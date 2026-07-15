//worker.cpp

#include "Worker.h";

Worker::Worker()
{
	name = "";
	salary = 0;
}

Worker::Worker(string n, double d)
{
	name = n;
	salary = d;
}

void Worker::setName(string n)
{
	name = n;
}

void Worker::setSalary(double d)
{
	salary = d;
}

string Worker::getName()
{
	return name;
}

double Worker::getSalary()
{
	return salary;
}