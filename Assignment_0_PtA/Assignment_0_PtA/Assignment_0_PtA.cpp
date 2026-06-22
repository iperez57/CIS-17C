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
	string arr[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	double amounts[size];

	input(amounts, size);

	cout << "Here are the credit card totals for each month:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " : " << "$" << amounts[i] << endl;
	}
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