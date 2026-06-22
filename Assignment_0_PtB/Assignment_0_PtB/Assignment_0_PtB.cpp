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

}

void readPrices(ifstream& file, int arr[])
{
	for (int i = 0; i < 15; i++)
	{
		file >> arr[i];
	}
}
