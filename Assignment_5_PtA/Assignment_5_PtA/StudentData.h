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
public:
	StudentData();
	StudentData(string last, string first, string addr, string city, string st, string zip, string phone, int id, bool freshman);

	//setters
	void setStudentID(int i);
	void setIncomingFreshman(bool b);

	//getters
	int getStudentID();
	bool getIncomingFreshman();
};
#endif