#include "stdafx.h"
#include "Person.h"
#include <iostream>

using namespace std;


Person::Person(string first, string last, int arbitrary) :firstName(first), lastName(last),arbitraryNumber(arbitrary)
{
	cout << "person was created" << endl;
}


Person::~Person()
{
	cout << "person was destroyed" << endl;
}
