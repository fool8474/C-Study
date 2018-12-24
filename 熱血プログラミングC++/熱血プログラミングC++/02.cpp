#include "mainHeader.h"

using namespace std;

void Q2Main(void) {
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;
}

void swap(int *num1, int *num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void swap(char *ch1, char *ch2) {
	char * temp = new char[100];
	*temp = *ch1;
	*ch1 = *ch2;
	*ch2 = *temp;
}

void swap(double *dbl1, double *dbl2) {
	double temp;
	temp = *dbl1;
	*dbl1 = *dbl2;
	*dbl2 = temp;
}