/*
Author: Steven Davis
Project: Menu Stubbing project
Due date: September 22, 2020
Purpose: Create and display a menu that can be modified later
Note: Creating a seperate function for each option to prevent possible interference down the line
*/

#include <iostream>

using namespace std;

//Declare functions to be defined later. A funciton for menu, and functions for each option
void menu();
void opt1();
void opt2();
void opt3();
void opt4();
void opt5();
void opt6();
void opt7();
void opt8();
void opt9();
void opt10();
bool exit();

int main()
{
	menu();	//Call the menu code
	
	system("pause");
	return 0;
}

void menu()
{
	bool done = false; //create a sentinal value for use in keeping the program running
	int input_choice; //Value to take in the input
	int numberOfChoices = 10; //Value to be used in outputting menu and error checking 

	while(!done)
	{
		cout << "Please input the menu option you want." << endl;
		for(int x = 1; x <= numberOfChoices; x++)	//Loop to help output the menu
		{
			cout << x << ") Option "<< x << endl; //Output message. Can be modified later. This is just for current outputting
		}
		cout << numberOfChoices + 1 << ") Exit\n";	//Exit option

		cout << "Selection: ";
		cin >> input_choice;

		//Run the selection through a switch to get to the right output	
		switch(input_choice)
		{
		case 1:
			{
				opt1();
				break;
			}
		case 2:
			{
				opt2();
				break;
			}
		case 3:
			{
				opt3();
				break;
			}
		case 4:
			{
				opt4();
				break;
			}
		case 5:
			{
				opt5();
				break;
			}
		case 6:
			{
				opt6();
				break;
			}
		case 7:
			{
				opt7();
				break;
			}
		case 8:
			{
				opt8();
				break;
			}
		case 9:
			{
				opt9();
				break;
			}
		case 10:
			{
				opt10();
				break;
			}
		case 11:
			{
				done = exit();
				break;
			}
		default:
			{
				cout << "Invalid input. Please Try again\n";
				break;
			}
		}
	}
}

//Implement the declared functions
void opt1()
{
	cout << "Not implemented yet" << endl;
}

void opt2()
{
	cout << "Not implemented yet" << endl;
}

void opt3()
{
	cout << "Not implemented yet" << endl;
}

void opt4()
{
	cout << "Not implemented yet" << endl;
}

void opt5()
{
	cout << "Not implemented yet" << endl;
}

void opt6()
{
	cout << "Not implemented yet" << endl;
}

void opt7()
{
	cout << "Not implemented yet" << endl;
}

void opt8()
{
	cout << "Not implemented yet" << endl;
}

void opt9()
{
	cout << "Not implemented yet" << endl;
}

void opt10()
{
	cout << "Not implemented yet" << endl;
}

bool exit()
{
	cout << "Ending program\n";
	return true;
}