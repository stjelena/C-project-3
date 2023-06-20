#ifndef _vozilo_h_
#define _vozilo_h_

using namespace std;
#include <string>
#include <iostream>
#include "Put.h"

class Vozilo {
	string naziv;
public:
	Vozilo(string n) :naziv(n) {};

	double cena(Put& put);

	friend ostream& operator<<(ostream& it, Vozilo& v);

};


#endif
