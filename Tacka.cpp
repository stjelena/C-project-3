#include "Tacka.h"

bool operator==(Tacka& t1, Tacka& t2)
{
	if (t1.getX() == t2.getX() && t1.getY() == t2.getY()) return true;
	else return false;
}

ostream& operator<<(ostream& it, Tacka& t)
{
	it << "(" << t.getX() << "," << t.getY() << ")";
	return it;
}

double D(Tacka& t1, Tacka& t2)
{
	double d;
	d = sqrt(pow(t1.getX() - t2.getX(), 2) + pow(t1.getY() - t2.getY(), 2));
	return d;
}
