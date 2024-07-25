#pragma once

class Movie
{
private:
	string title;
	Person dir;
	vector<Person> cast;
	int runtime;

public:
	string getTitle() const;
	static bool isLongMovie(int min);
	friend ostream& operator<<(ostream& strm, const Movie& screen);
};

