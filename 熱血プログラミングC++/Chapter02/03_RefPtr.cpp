#include "mainHeader.h"

using namespace std;

void RefPtr() {
	int num = 12;
	int *ptr = &num;
	int **pptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&ppref) = pptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **ppref << endl;
}