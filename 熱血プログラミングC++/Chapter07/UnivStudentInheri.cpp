#include "mainHeader.h"
#include "UnivStudentInheri.h"

using namespace std;

class Person {
private:
	int age;
	char * name;

public :
	Person(const char * myname)
	{
		name = new char[strlen(myname) + 1];
		strcpy_s(name, sizeof(name), myname);
	}

	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person
{
private :
	char * major;
public :
	UnivStudent(const char * myname, const char * mymajor) : Person(myname) {
		major = new char[strlen(mymajor) + 1];
		strcpy_s(major, sizeof(major), mymajor);
	}

	void WhoAreYou() const {
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

void univPersonMain() {
	UnivStudent ustd1("Lee", "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", "Electronic eng.");
	ustd2.WhoAreYou();
}