#pragma once
#ifndef CITY_H
#define CITY_H

class City
{
private:
	string name;
	double latitude, longitude;

public:
	City(string n, double la, double lo);
	string getName();
	double getLatitude();
	double getLongitude();
	string display();
};

#endif // !CITY_H
