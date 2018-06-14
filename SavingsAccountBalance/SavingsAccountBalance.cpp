// SavingsAccountBalance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*
	Author: John O'Brien
	Date created: 6/13

	Program Goals:
	Savings Account Balance
	Write a program that calculates the balance of a savings account at the end of a period
	of time. It should ask the user for the annual interest rate, the starting balance, and the
	number of months that have passed since the account was established. A loop should
	then iterate once for every month, performing the following:
	A) Ask the user for the amount deposited into the account during the month. (Do not
	accept negative numbers.) This amount should be added to the balance.
	B) Ask the user for the amount withdrawn from the account during the month. (Do
	not accept negative numbers.) This amount should be subtracted from the balance.
	C) Calculate the monthly interest. The monthly interest rate is the annual interest rate
	divided by twelve. Multiply the monthly interest rate by the balance, and add the
	result to the balance.
	After the last iteration, the program should display the ending balance, the total
	amount of deposits, the total amount of withdrawals, and the total interest earned.
	NOTE: If a negative balance is calculated at any point, a message should be displayed
	indicating the account has been closed and the loop should terminate.
*/

bool IntTryParse(string toParse, int &value)
{
	try
	{
		stoi(toParse);
		value = stoi(toParse);
		return true;
	}
	catch (exception ex)
	{
		return false;
	}
}

bool DoubleTryParse(string toParse, double &value)
{
	try
	{
		stod(toParse);
		value = stod(toParse);
		return true;
	}
	catch (exception ex)
	{
		return false;
	}
}

int main()
{
	int months;
	double interest, balance;
	string input;
	bool valid = false;
	while (!valid)
	{
		cout << "Please enter the starting account balance: ";
		getline(cin, input);
		if (DoubleTryParse(input, balance) && balance > 0)
		{
			valid = true;
		}
		else
		{
			cout << "\nPlease enter a valid balance." << endl;
			valid = false;
			continue;
		}
		cout << "Please enter the annual interest rate: ";
		getline(cin, input);
		if (DoubleTryParse(input, interest) && interest > 0)
		{
			valid = true;
		}
		else
		{
			cout << "\nPlease enter a valid interest rate." << endl;
			valid = false;
			continue;
		}
		cout << "Please enter the numbers of months you wish to perform transactions for: ";
		getline(cin, input);
		if (IntTryParse(input, months) && months > 0)
		{
			valid = true;
		}
		else
		{
			cout << "\nPlease enter a valid number of months.";
			valid = false;
			continue;
		}
	}
	if (valid)
	{
		double currBal = balance;
		double tempVal;
		for (int i = 0; i < months; i++)
		{
			cout << "Enter the withdrawl amount for month " << (i + 1) << ":  ";
			getline(cin, input);
			if (DoubleTryParse(input, tempVal) && tempVal > 0)
			{

			}
		}
	}

    return 0;
}

