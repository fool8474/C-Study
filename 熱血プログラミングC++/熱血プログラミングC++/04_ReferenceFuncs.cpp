#include "mainHeader.h"
#include "04_ReferenceFuncs.h"

using namespace std;

void RefSwap(int &ref1, int &ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

void RefSwapMain() {
	int val1 = 10;
	int val2 = 20;

	RefSwap(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
}

void Ch2_4_Q1(){
	int curNum = 0;

	cout << refAdder(curNum) << endl;
	cout << refAdder(curNum) << endl;
	cout << refAdder(curNum) << endl;
	cout << refChanger(curNum) << endl;
}

int refAdder(int &num) {
	return num += 1;
}

int refChanger(int &num) {
	return num = -num;
}

void Ch2_4_Q3(){
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << ", " << *ptr2 << endl;
}

void SwapPointer(int *(&ptr1), int *(&ptr2)) {
	int *temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

void RefReturnOneMain() {
	int num = 1;
	int &num2 = RefRetFuncOne(num);

	num++;
	num2++;
	cout << "num1 : " << num << endl;
	cout << "num2 : " << num2 << endl;
}

void RefReturnTwoMain() {
	int num = 1;
	int num2 = RefRetFuncOne(num);

	num++;
	num2+=100;
	cout << "num1 : " << num << endl;
	cout << "num2 : " << num2 << endl;
}

int& RefRetFuncOne(int &ref) {
	ref++;
	return ref;
}
