// StudentData.h

#ifndef STUDENTDATA_H
#define STUDENTDATA_H

#include "PersonData.h"

using namespace std;
class StudentData : public PersonData
{
private:
	int studentID;
	bool incomingFreshman;
	static int nextID;
public:
	StudentData();
	StudentData(string last, string first, string addr, string cit, string st, string zi, string ph, int i, bool b);

	//setters
	void setStudentID(int i);
	void setIncomingFreshman(bool b);

	//getters
	int getStudentID();
	bool getIncomingFreshman();
};
#endif