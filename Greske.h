#pragma once
#include <exception>
using namespace std;

class GImaTacka : public exception {
public:
	GImaTacka() : exception("Greska: Vec postoji ta tacka u listi!") {}
};
