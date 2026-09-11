
/*
Hannah Jones
Math 1900 Homework 2
Module 2: Variables, Data Types & Expressions
*/

#include <iostream>
using namespace std;

int main() {
	// Assigning the resistor a name, grade, and quantity.
	string resistorName = "Resistor";
	char resistorGrade = 'A';
	int resistorQty = 4;

	// Assigning the capacitor a name, grade, and quantity.
	string capacitorName = "Capacitor";
	char capacitorGrade = 'A';
	int capacitorQty = 3;

	// Assigning the inductor a name, grade, and quantity.
	string inductorName = "Inductor";
	char inductorGrade = 'C';
	int inductorQty = 3;

	// Assigning the diode a name, grade, and quantity.
	string diodeName = "Diode";
	char diodeGrade = 'D';
	int diodeQty = 3;

	// Assigning the transistor a name, grade, and quantity.
	string transistorName = "Transistor";
	char transistorGrade = 'F';
	int transistorQty = 3;

	// Prints each variable
	cout << resistorName << " - Grade: " << resistorGrade << " - Qty: " << resistorQty << endl;
	cout << capacitorName << " - Grade: " << capacitorGrade << " - Qty: " << capacitorQty << endl;
	cout << inductorName << " - Grade: " << inductorGrade << " - Qty: " << inductorQty << endl;
	cout << diodeName << " - Grade: " << diodeGrade << " - Qty: " << diodeQty << endl;
	cout << transistorName << " - Grade: " << transistorGrade << " - Qty: " << transistorQty << endl;

	// returns the value to zero and ends the program
	return 0;

}