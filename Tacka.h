#ifndef _tacka_h_
#define _tacka_h_

using namespace std;
#include <iostream>
#include <cmath>

class Tacka {
	int x, y;

public:
	Tacka(int xx, int yy) : x(xx), y(yy) {};

	int getX() const { return x; }
	int getY() const { return y; }
	friend bool operator==(Tacka& t1, Tacka& t2);
	friend ostream& operator<<(ostream& it, Tacka& t);
	friend double D(Tacka& t1, Tacka& t2);
};


#endif
