//StudentData.cpp

#include "StudentData.h"

StudentData::StudentData()
{
	studentID = 0;
	incomingFreshman = false;
	
}

StudentData::StudentData(string last, string first, string addr, string cit, string st, string zi, string ph, int i, bool b)
{
	setFirstName(first);
	setLastName(last);
	setAddress(addr);
	setCity(cit);
	setZip(zi);
	setState(st);
	setPhone(ph);
	studentID = nextID++;
	incomingFreshman = b;
}