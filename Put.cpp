#include "Put.h"

Put& Put::operator+=(Tacka &t)
{
	for (int i = 0; i < lista.brEl(); i++) {
		if (lista[i] == t && i > 0) throw new GImaTacka();
	}
	lista += t;
	return *this;
}

double S(Put &put)
{
	double s = 0;
	for (int i = 0; i < put.lista.brEl(); i++) {
		if ((i+1) < put.lista.brEl())
		s += D(put.lista[i], put.lista[i+1]);
	}
	return s;
}

ostream& operator<<(ostream& it, Put& p)
{
	for (int i = 0; i < p.lista.brEl(); i++) {
		it << p.lista[i];
	}
	return it;
}
