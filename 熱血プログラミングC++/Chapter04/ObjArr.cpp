#include "mainHeader.h"
using namespace std;

class Person {
private :
	char * name;
	int age;

public :
	Person(char * myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, sizeof(name), myname);
		age = myage;
	}

	Person() {
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char * myname, int myage) {
		name = myname;
		age = myage;
	}

	void ShowPersonInfo() const {
		cout << "�̸� : " << name << ", " << "���� : " << age << endl;
	}

	~Person() {
		cout << "called destructor!" << endl;
	}
};

void ObjArrMain() {
	Person * parr[3];
	char namestr[100];
	char * strptr;
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸� : ";
		cin >> namestr;
		cout << "���� : ";
		cin >> age;
		parr[i] = new Person(namestr, age);
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];
}