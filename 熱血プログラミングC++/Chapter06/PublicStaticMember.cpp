#include <iostream>
#include "PublicStaticMember.h"
using namespace std;

class SoSimple {
public :
	static int simObjCnt;
public :
	SoSimple() {
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;

void publicStaticMain(void){
	cout << SoSimple::simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	cout << sim1.simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	cout << sim2.simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
}