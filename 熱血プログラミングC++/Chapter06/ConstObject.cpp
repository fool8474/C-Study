#include "mainHeader.h"
#include "ConstObject.h"
using namespace std;

class SoSimple {
private :
	int num;
public :
	SoSimple(int n) : num(n) {}
	SoSimple& AddNum(int n) { num += n; return *this; }

	void ShowData() const {
		cout << "num : " << num << endl;
	}
};

void constObjectMain(void) {
	const SoSimple obj(7);
	//obj.AddNum(20); //호출하지 못함. const 객체라서.
	obj.ShowData();
}