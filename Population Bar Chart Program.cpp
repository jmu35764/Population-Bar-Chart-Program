// Population Bar Chart Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string filename, townname;
	int starting_year, pop_points;

	starting_year = 1900;

	cout << "Please enter filename \n";
	cin >> filename;
	cout << "Please enter town name \n";
	cin >> townname;
	cout << endl;

	ifstream inFile(filename); // Open file for reading

	if (!inFile)
	{
		cerr << "Error opening file!" << endl;
		return 1;
	}

	int population;
	int star;

	cout << townname << " Population Growth" << endl; // Title of table

	while (inFile >> population) // Read file by line
	{
		pop_points = population/1000;
		cout << starting_year << " " << setw(3);
		starting_year += 20;
		for (star = 0; star < pop_points; star++) // Loop for adding stars
		{
			cout << "*";
		}

		cout << endl;
	}
	inFile.close();
	return 0;
}

