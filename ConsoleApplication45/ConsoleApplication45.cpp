// ConsoleApplication45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"	
using namespace std;	

int main()	
{
	int choise;	
	Car a("Audi A5", "Red,", 2021, 25000);	
	a.GetModel();	
	a.Print();	
	cout << "How do you want to change the value? " << endl;	
	cout << "1 - Enter manually " << endl;	
	cout << "2 - Default " << endl;	
	cin >> choise;	
	switch (choise) 
	{
	case 1:	
		a.input();	
		a.Print();	
		break;
	case 2:
		a.SetModel("Tesla Model X");	
		char* model = a.GetModel();	
		cout << "Model: " << model << endl;	

		a.SetColor("White");
		char* color = a.GetColor();	
		cout << "Color: " << color << endl;	

		a.SetYear(2012);
		int year = a.GetYear();
		cout << "Year: " << year << endl;	

		a.SetPrice(94.990);
		double price = a.GetPrice();
		cout << "Price: " << price << "$" << endl;
		a.Print();	
		break;	
	}	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
