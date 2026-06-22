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
	double total;
	double average;
	double largest;
	double smallest;

	input(amounts, size);

	cout << "Here are the credit card totals for each month:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " : " << "$" << amounts[i] << endl;
	}
	cout << endl;

	total = totalAmount(amounts, size);
	cout << "The total amount of money spent was $" << total << endl;

	average = averageAmount(amounts, size);
	cout << "The average amount of money spent per month was $" << average << endl;

	largest = largestMonth(amounts, size);
	cout << "The most amount of money spent in a month was $" << largest << endl;

	smallest = smallestMonth(amounts, size);
	cout << "The least amount of money spent in a month was $" << smallest << endl;

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
	double tot = 0;

	for (int i = 0; i < size; i++)
	{
		tot += amounts[i];
	}

	return tot;
}

double averageAmount(double amounts[], int size)
{
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += amounts[i];
	}

	avg = avg / size;
	return avg;
}

double largestMonth(double amounts[], int size)
{
	double lar = amounts[0];

	for (int i = 0; i < size; i++)
	{
		if (amounts[i] > lar)
		{
			lar = amounts[i];
		}
	}

	return lar;
}

double smallestMonth(double amounts[], int size)
{
	double sml = amounts[0];
	
	for (int i = 0; i < size; i++)
	{
		if (amounts[i] < sml)
		{
			sml = amounts[i];
		}
	}

	return sml;
}