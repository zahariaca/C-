#pragma once
#include "Person.h"
#include <string>

using namespace std;
class Tweeter :
	public Person
{
private:
	string tweeterHandler;
public:
	Tweeter(string first, string last, int arbitrary, string tweeter);
	~Tweeter();
};

