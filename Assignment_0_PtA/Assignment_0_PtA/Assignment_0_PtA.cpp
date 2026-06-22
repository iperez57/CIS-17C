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
	double totAmt;

	input(amounts, size);

	cout << "Here are the credit card totals for each month:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " : " << "$" << amounts[i] << endl;
	}
	cout << endl;

	totAmt = totalAmount(amounts, size);
	cout << "The total amount of money spent was $" << totAmt;
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

double totalAmount(double amounts[], int size)
{
	double total = 0;

	for (int i = 0; i < size; i++)
	{
		total += amounts[i];
	}

	return total;
}