#include "Tacka.h"
#include "Put.h"

int main() {
	Tacka T1(2, 5);
	cout << T1 << endl;
	Tacka T2(4, 4);
	Tacka T3(3, 3);
	Tacka T4(3, 4);
	Tacka T5(1, 2);

	cout << D(T1, T2) << endl << D(T2, T3) << endl << D(T3, T4) << endl << D(T4, T5) << endl;


	//ovo nesto ne valja
	Put put;
	put += T1;
	put += T2;
	put += T3;
	put += T4;
	put += T5;

	cout << endl << put << endl << S(put);

	//put += T3;
}