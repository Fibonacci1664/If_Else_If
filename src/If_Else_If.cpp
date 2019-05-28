/*
 * If_Else_If.cpp
 *
 *  Created on: 28 May 2019
 *      Author: Dave
 */


#include<iostream>

using namespace std;

int main()
{
	cout << "1. Add a new record." << endl;
	cout << "2. Delete a record." << endl;
	cout << "3. View a record." << endl;
	cout << "4. Search records." << endl;
	cout << "5. Quit application." << endl;

	cout << "Please make a selection:> " << flush;

	int value;

	cin >> value;

	if(value == 1)
	{
		cout << "Adding a new record..." << endl;
	}
	else if(value == 2)
	{
		cout << "Deleting a record..." << endl;
	}
	else if(value == 3)
	{
		cout << "Viewing records..." << endl;
	}
	else if(value == 4)
	{
		cout << "Searching records..." << endl;
	}
	else if(value == 5)
	{
		cout << "Quitting application..." << endl;
	}
	else
	{
		cout << "You have entered an incorrect number!" << endl;
	}


	return 0;
}

