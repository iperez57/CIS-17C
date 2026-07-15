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