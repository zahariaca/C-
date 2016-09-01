// FrameName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";

	cout << message << endl;

	const std::string exclam = "!";
	const std::string message2 = "Hello, world" + exclam;
	cout << message2 << endl;

	{ 
		const std::string s = "a string";
		std::cout << s << std::endl; 
	}

	{ 
		const std::string s = "another string";
		std::cout << s << std::endl; 
	}


	{ 
		const std::string s = "a string 2";
		std::cout << s << std::endl;
		{ const std::string s = "another string 2";
		std::cout << s << std::endl; }
	}

	{
		std::cout << "What is your name? ";
		std::string name2;
		std::cin >> name2;
		std::cout << "Hello, " << name2
			<< std::endl << "And what is yours? ";
		std::cin >> name2;
		std::cout << "Hello, " << name2
			<< "; nice to meet you too!" << std::endl;
	}

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
	}
*/

	{
		// ask for the person's name
		cout << "Please enter your first name: ";
		// read the name
		string name;
		cin >> name;
		// build the message that we intend to write
		const string greeting = "Hello, " + name + "!";
		// the number of blanks surrounding the greeting
		const int pad = 1;
		// the number of rows and columns to write
		const int rows = pad * 2 + 3;
		const string::size_type cols = greeting.size() + pad * 2 + 2;
		// write a blank line to separate the output from the input
		cout << endl;
		// write rows rows of output
		// invariant: we have written r rows so far
		for (int r = 0; r != rows; ++r) {
			string::size_type c = 0;
			// invariant: we have written c characters so far in the current row
			while (c != cols) {
				// is it time to write the greeting?
				if (r == pad +1 && c == pad + 1)
				{
					cout << greeting;
					c += greeting.size();
				}
				else {
					// are we on the border?
					if (r == 0 || r == rows - 1 ||
						c == 0 || c == cols - 1)
						cout << "*";
					else
						cout << " ";
						++c;
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}

