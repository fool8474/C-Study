#include "mainHeader.h"

void calMain(void) {
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.2 - 2.4 = " << cal.Sub(3.2, 2.4) << endl;
	cout << "3.2 * 2.4 = " << cal.Mul(3.2, 2.4) << endl;
	cout << "3.2 / 2.4 = " << cal.Div(3.2, 2.4) << endl;
	cal.ShowOpCount();
}