#include "mainHeader.h"
#include "01.h"
using namespace std;
void Q1_1() {
	int nums[5];
	int result = 0;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << "��° ���� �Է� : ";
		cin >> nums[i];
		result += nums[i];
	}

	cout << "�հ� : " << result << endl;

}

void Q1_2() {
	char name[100];
	char phoneNum[100];

	cin >> name >> phoneNum;
	cout << name << " " << phoneNum;
}

void Q1_3() {
	int target;
	cout << "�����Է� : ";
	cin >> target;

	for (int i = 1; i < 10; i++) {
		cout << target << " * " << i << " = " << target * i << endl;
	}
}
