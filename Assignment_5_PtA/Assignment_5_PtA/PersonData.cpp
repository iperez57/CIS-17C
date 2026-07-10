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