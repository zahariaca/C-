#include "stdafx.h"
#include "Tweeter.h"
#include <iostream>

using namespace std;

Tweeter::Tweeter(string first, string last, int arbitrary, string tweeter):Person(first, last, arbitrary), tweeterHandler(tweeter)
{
	cout << "tweeter is construncted" << endl;
}


Tweeter::~Tweeter()
{
	cout << "tweeter is destructed" << endl;
}
