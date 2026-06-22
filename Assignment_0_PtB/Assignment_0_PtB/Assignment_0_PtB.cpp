// Assignment_0_PtB.cpp

#include <iostream>
#include <fstream>

using namespace std;

void readPrices(ifstream&, int[]);
void displayPrices(int[], int);

int main()
{
	const int size = 15;
	int arr[size];
	ifstream file("prices.txt");

	if (!file)
	{
		cout << "Error opening file." << endl;
		return 0;
	}

	readPrices(file, arr);
	displayPrices(arr, size);

}

void readPrices(ifstream& file, int arr[])
{
	for (int i = 0; i < 15; i++)
	{
		file >> arr[i];
	}
}

void displayPrices(int arr[], int size)
{
	cout << "The prices for the 15 rows are: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "$" << arr[i] << endl;
	}
}