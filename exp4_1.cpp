#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int add (int x, int y)
{
	int z = x + y;
	return z;
}
int subtract (int x, int y)
{
	int z = x - y;
	return z;
}
int multiply (int x, int y)
{
	int z = x * y;
	return z;
}
int divide (int x, int y)
{
	int z = x / y;
	return z;
}
int modul (int x, int y)
{
    int z = x % y;
    return z;
}
int main()
{
	int menu, a, b, z;
	char choice;
	bool exit = false;
	
	cout << "MENU: \n";
	cout << "   1. Add\n";
	cout << "   2. Subtract\n";
	cout << "   3. Multiply\n";
	cout << "   4. Divide\n";
	cout << "   5. Modulus\n";
	
	do
	{
		cout << "Enter your choice: ";
		cin >> menu;
		
		switch(menu)
		{
			case 1:
				{
					cout << "Enter first integer: ";
					cin >> a;
					cout << "Enter second integer: ";
					cin >> b;
					cout << "The result is " << add (a, b) << endl;
					break;
				}
			case 2:
				{
					cout << "Enter first integer: ";
					cin >> a;
					cout << "Enter second integer: ";
					cin >> b;
					cout << "The result is " << subtract (a, b) << endl;
					break;
				}
			case 3:
				{
					cout << "Enter first integer: ";
					cin >> a;
					cout << "Enter second integer: ";
					cin >> b;
					cout << "The result is " << multiply (a, b) << endl;
					break;
				}
			case 4:
				{
					cout << "Enter first integer: ";
					cin >> a;
					cout << "Enter second integer: ";
					cin >> b;
					cout << "The result is " << divide (a, b) << endl;
					break;
				}
			case 5:
				{
					cout << "Enter first integer: ";
					cin >> a;
					cout << "Enter second integer: ";
					cin >> b;
					cout << "The result is " << modul (a, b) << endl;
					break;
				}
			default:
				{
					cout << "\nInput is invalid.";
				}
		}
		
		cout << "\n\nDo you want to continue(Y/N)? ";
		cin >> choice;
		cout << endl;
		
		switch(choice)
		{
			case 'Y':
			case 'y':
			{
				exit = true;
				break;
			}
			case 'N':
			case 'n':
			{
				exit = false;
				break;
			}
			default:
			{
				cout << "Input is invalid.";
				exit = false;
			}
		}
	
	}while(exit != false );
	getch();
	return 0;
}

