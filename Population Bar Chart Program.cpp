// Population Bar Chart Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename;

	cout << "Please enter filename \n";
	cin >> filename;

	ifstream inFile(filename); // Open file for reading

	if (!inFile)
	{
		cerr << "Error opening file!" << endl;
		return 1;
	}

	string line;
	while (getline(inFile, line))
	{ // Read line by line
		cout << line << endl;
	}
	inFile.close();
	return 0;
}

