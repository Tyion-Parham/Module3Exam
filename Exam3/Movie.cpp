#include <vector>
#include <ostream>
#include "Person.h"
#include "Movie.h"
using namespace std;

string Movie::getTitle() const
{
	return title;
}

bool Movie::isLongMovie(int min)
{
	if (min > 135)
		return true;
	return false;
}

ostream& operator<<(ostream& strm, const Movie& screen)
{
	strm << screen.getTitle() << "\t\t" << "Is long Movie? " << screen.isLongMovie(screen.runtime) <<
		"\n" << 
}