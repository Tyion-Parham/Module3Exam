#include <iostream> 
#include <string>
#include "City.h"
using namespace std;

City::City(string n, double la, double lo) :
	name(n), latitude(la), longitude(lo) {}

string City::getName()
{
	return name;
}
double City::getLatitude()
{
	return latitude;
}
double City::getLongitude()
{
	return longitude;
}

string City::display()
{
	string output;
	output = getName() + "\tLatitude: " + to_string(getLatitude()) + "\tLongitude: " + to_string(getLongitude()) + "\n";
	return output;
}