#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// This program is for performing various calculations and comparisons on a set of three integers.
// Written by Logan Skura, 9/1/2022

int main()
{
	// These are our input variables
	int i1 = 0; 
	int i2 = 0; 
	int i3 = 0;

	// These prompt the user for three integer values
	cout << "Input three different integers: " << endl;
	cin >> i1 >> i2 >> i3;
	
	// These output our calculations and comparisons
	cout << "Sum is " << i1 + i2 + i3 << endl;
	cout << "Average is " << (i1 + i2 + i3) / 3 << endl;
	cout << "Product is " << i1 * i2 * i3 << endl;
	
	if (i1 < i2 && i1 < i3)
	{
		cout << "Smallest is " << i1 << endl;
	}
	else if (i2 < i1 && i2 < i3)
	{
		cout << "Smallest is " << i2 << endl;
	}
	else
	{
		cout << "Smallest is " << i3 << endl;
	}
	if (i1 > i2 && i1 > i3)
	{
		cout << "Largest is " << i1 << endl;
	}
	else if (i2 > i1 && i2 > i3)
	{
		cout << "Largest is " << i2 << endl;
	}
	else
	{
		cout << "Largest is " << i3 << endl;
	}
	return 0;
}