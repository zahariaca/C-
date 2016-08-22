#pragma once
#include <string>
#ifndef _Person_H
#define _Person_H


using namespace std;

class Person
{
private:
	string firstName;
	string lastName;
	int arbitraryNumber;
public:
	Person(string first, string last, int arbitrary);
	~Person();
};
#endif
