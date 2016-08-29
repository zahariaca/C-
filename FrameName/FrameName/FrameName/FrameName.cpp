// FrameName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Please input a name: ";
	string name;
	cin >> name;
	const string phrase = "Hello, " + name + "!";

	const string space(phrase.size(), ' ');
	const string second = "* " + space + " *";
	const string first(second.size(), '*');

	cout << endl 
		 << first << endl 
		 << second << endl 
		 << "* " << phrase << " *" << endl 
		 << second << endl 
		 << first << endl;


	return 0;
}

