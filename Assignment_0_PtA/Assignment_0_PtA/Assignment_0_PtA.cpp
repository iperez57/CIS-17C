// Assignment_0_PtA.cpp

#include <iostream>

using namespace std;

void input(double[], int);
double totalAmount(double [], int);
double averageAmount(double [], int);
double largestMonth(double [], int);
double smallestMonth(double [], int);

int main()
{
	const int size = 12;
	string arr[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	double amounts[size];
}

void input(double amounts[], int size)
{
	double amt;
	for (int i = 0; i < size; i++)
	{
		cin >> amt;
		amounts[i] = amt;
	}
}