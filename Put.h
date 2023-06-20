#ifndef _put_h_
#define _put_h_

#include "Lista.h"
#include "Tacka.h"
#include "Greske.h"

class Put {
	Lista<Tacka> lista;

public:
	Put() {};
	Put& operator+=(Tacka &t);
	friend double S(Put &put);
	friend ostream& operator<<(ostream& it, Put& p);
};


#endif
