//StudentData.cpp

#include "StudentData.h"

int StudentData::nextID = 0;

StudentData::StudentData()
{
	studentID = nextID++;
	incomingFreshman = false;
	
}

StudentData::StudentData(string last, string first, string addr, string cit, string st, string zi, string ph, bool b)
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

void StudentData::setIncomingFreshman(bool b)
{
	incomingFreshman = b;
}

void StudentData::setStudentID()
{
	studentID = nextID++;
}

int StudentData::getStudentID()
{
	return studentID;
}

bool StudentData::getIncomingFreshman()
{
	return incomingFreshman;
}