#include "Vozilo.h"

double Vozilo::cena(Put& put)
{
	return 120 + S(put) * 0.1;
}

ostream& operator<<(ostream& it, Vozilo& v)
{
	return it << "Naziv modela";
}
