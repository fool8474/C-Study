#include <iostream>
#include "IKnowTempObj.h"
using namespace std;

class Temporary {
private :
	int num;
public :
	Temporary(int n) : num(n)
	{
		cout << "create obj : " << num << endl;
	}
	~Temporary() 
	{
		cout << "destory obj : " << num << endl;
	}
	void ShowTempInfo() 
	{
		cout << "My num is " << num << endl;
	}
};

void TempObjMain() {
	Temporary(100);
	cout << "****** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "****** end of main!" << endl << endl;
}