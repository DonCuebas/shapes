// Your Name: Don-Omar Cuebas
// Date: 9/19/22
// Program Title: Shapes Program
// Program Description: This program will calculate the area for a circle, rectangle, and triangle.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants
const double PI = 3.14;

int main()
{

	// Variable declaration
	int choice;
	double height, width;
	double area;

	//Program title and description for the user

	cout << "Shapes Program" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - Calculate the area of a rectangle" << endl;
	cout << "2 - Calculate the area of a circle" << endl;
	cout << "3 - Calculate the area of a triangle" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Output to the screen
	system("cls");

	if (choice == 1)
	{
		cout << "Perform task #1 : Rectangle area" << endl << endl;

		// User input 
		cout << "What is the height in centimeters?" << endl;
		cin >> height;
		cout << "What is the width in centimeters?" << endl;
		cin >> width;

		// Calculations
		area = height * width;

		// Output to the screen
		cout << "\nThe area of the rectangle is " << area << " square centimeters." << endl;
	}
	else if (choice == 2)
	{
		cout << "Perform task #2 : Circle area" << endl << endl;
		// User input 
		cout << "What is the radius in centimeters?" << endl;
		cin >> width;

		// Calculations
		area = PI * (width * width); 

		// Output to the screen
		cout << "\nThe area of the circle is " << area << " square centimeters." << endl;
	}
	else if (choice == 3)
	{
		cout << "Perform task #3 : Triangle area" << endl << endl;
		// User input 
		cout << "What is the height in centimeters?" << endl;
		cin >> height;
		cout << "What is the width in centimeters?" << endl;
		cin >> width;

		// Calculations
		area = (height * width) / 2;

		// Output to the screen
		cout << "\nThe area of the triangle is " << area << " square centimeters." << endl;
	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}