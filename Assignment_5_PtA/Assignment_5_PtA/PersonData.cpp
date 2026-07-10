//PersonData.cpp

#include<iostream>
#include"PersonData.h"

using namespace std;

PersonData::PersonData()
{
	firstName = " ";
	lastName = " ";
	address = " ";
	city = " ";
	zip = " ";
	state = " ";
	phone = " ";
}

PersonData::PersonData(string last, string first, string addr, string cit, string st, string zi, string ph)
{
	firstName = first;
	lastName = last;
	address = addr;
	city = cit;
	state = st;
	zip = zi;
	phone = ph;
}

void PersonData::setFirstName(string s)
{
	firstName = s;
}

void PersonData::setLastName(string s)
{
	lastName = s;
}

void PersonData::setAddress(string s)
{
	address = s;
}

void PersonData::setCity(string s)
{
	city = s;
}

void PersonData::setState(string s)
{
	state = s;
}

void PersonData::setZip(string s)
{
	zip = s;
}

void PersonData::setPhone(string s)
{
	phone = s;
}