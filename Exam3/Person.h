#pragma once
#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
	string fName, lName, dob;

public:
	Person(string f, string l, string bd);
	string getFirstName();
	string getlastName();
	string getDateOfBirth();
	string display();
};

#endif // !PERSON_H