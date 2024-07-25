#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(string f, string l, string bd) :
	fName(f), lName(l), dob(bd) {}

string Person::getFirstName()
{
	return fName;
}

string Person::getlastName()
{
	return lName;
}

string Person::getDateOfBirth()
{
	return dob;
}

string Person::display()
{
	string output;
	output = getFirstName() + " " + getlastName() + "\t" + getDateOfBirth() + "\n";
	return output;
}