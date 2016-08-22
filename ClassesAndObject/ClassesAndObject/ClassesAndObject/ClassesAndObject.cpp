// ClassesAndObject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"


int main()
{
	Person p1("Alex", "Zaharia", 24);
	{
		Tweeter("Andrei", "Popescu", 25, "@andrei");
	}

	Status s = Pending;
	s = Success;

    return 0;
}

