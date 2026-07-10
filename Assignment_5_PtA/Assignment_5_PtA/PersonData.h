//PersonData.h

#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>

using namespace std;
class PersonData
{
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;
public:
	PersonData();
	PersonData(string last, string first, string addr, string city, string st, string zip, string phone);
	
	//setters
	void setLastName(string s);
	void setFirstName(string s);
	void setAddress(string s);
	void setCity(string s);
	void setState(string s);
	void setZip(string s);
	void setPhone(string s);

	//getters
	string getLastName();
	string getFirstName();
	string getAddress();
	string getCity();
	string getState();
	string getZip();
	string getPhone();
};
#endif