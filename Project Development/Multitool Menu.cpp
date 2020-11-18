/*
Author: Steven Davis
Project: Multitool Menu
Due date: November 17, 2020
Version: 1.0
Purpose: Create and display a menu that can run a variety of functions
Note: Creating a seperate function for each option to prevent possible interference down the line, as well as make modification easier
*/

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Declare functions to be defined later. A funciton for menu, and functions for each option
void menu();
void selectionMenu();
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

	return 0;
}

void menu()
{
	bool done = false; //create a sentinal value for use in keeping the program running
	int input_choice; //Value to take in the input
	
	while (!done)
	{
		cout << "Please input the menu option you want." << endl;
		selectionMenu();

		cout << "Selection: ";
		cin >> input_choice;

		//Run the selection through a switch to get to the right output	
		switch (input_choice)
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
		
		system("pause");
	}
}

void selectionMenu()	//A functions that just outputs the options
{
	cout << "1) Calculate the factorial of a number\n"
		 << "2) Calculate the sum of two numbers\n"
		 << "3) Calculate the sum of multiple numbers\n"
		 << "4) Calculate the product of two numbers\n"
		 << "5) Calculate the product of multiple numbers\n"
		 << "6) Calculate the n power of a number\n"
		 << "7) Determine if this year is a leap year\n"
		 << "8) Generate a random number between 1 and 6\n"
		 << "9) Generate a random number between 1 and 20\n"
		 << "10) Generate a random number between 0 and 10,000\n"
		 << "11) End the program\n";
}

//Implement the declared functions
void opt1()	//Factorial calculator
{
	int inputNum;
	int factorial = 1;

	cout << "What number do you wanna find the factorial of? ";
	cin >> inputNum;

	for (int counter = 1; counter <= inputNum; counter++)
	{
		factorial *= counter;
	}

	cout << "The factorial of " << inputNum << " is " << factorial << ".\n";
}

void opt2()	//Sum of two
{
	float num1, num2;

	cout << "What is the first number? ";
	cin >> num1;
	cout << "What is the second number? ";
	cin >> num2;

	cout << "The sum of " << num1 << " and " << num2 << " is " << (num1 + num2) << ".\n";
}

void opt3()	//Sum of multiple
{
	int loopControl;
	float input;
	float sum = 0;

	cout << "How many numbers do you want to add together? ";
	cin >> loopControl;

	for (int counter = 0; counter < loopControl; counter++)
	{
		cout << "What number do you want to add to the sum? ";
		cin >> input;
		sum += input;
	}

	cout << "The final sum is " << sum << ".\n";
}

void opt4()	//Product of two
{
	float num1, num2;

	cout << "What is the first number? ";
	cin >> num1;
	cout << "What is the second number? ";
	cin >> num2;

	cout << "The product of " << num1 << " and " << num2 << " is " << (num1 * num2) << ".\n";
}

void opt5()	//Product of multiple
{
	int loopControl;
	float input;
	float product = 1;

	cout << "How many numbers do you want to multiply together? ";
	cin >> loopControl;

	for (int counter = 0; counter < loopControl; counter++)
	{
		cout << "What number do you want to add to the product? ";
		cin >> input;
		product *= input;
	}

	cout << "The final product is " << product << ".\n";
}

void opt6() //Powers
{
	int powerNum;
	int baseNum;

	cout << "What is the number you want to raise to the power? ";
	cin >> baseNum;
	cout << "What is the power you wish to raise to? ";
	cin >> powerNum;

	cout << "The answer is " << pow(baseNum, powerNum) << ".\n";
}

void opt7() //Leap year check
{
	int year; 

	cout << "Insert a year for the leap year calculation. ";
	cin >> year;

	if (year % 400 == 0)
		cout << "Leap Year.\n";

	else if (year % 100 == 0)
		cout << "Not a leap year.\n";

	else if (year % 4 == 0)
		cout << "Leap year.\n";

	else
		cout << "Not leap year.\n";
}

void opt8()	//Ouput a random number 1-6
{
	int output;

	output = rand() % 6 + 1;

	cout << "The number is " << output << ".\n";
}

void opt9()	//Ouput a random number 1-20
{
	int output;

	output = rand() % 20 + 1;

	cout << "The number is " << output << ".\n";
}

void opt10() //Output a random number with no range. 
{
	int output;

	output = rand() % 10000;

	cout << "The number is " << output << ".\n";
}

bool exit() //Send
{
	cout << "Ending program\n";
	return true;
}