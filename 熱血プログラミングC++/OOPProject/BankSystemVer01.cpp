#include "mainHeader.h"
#include "BankSystemVer01.h"

using std::cout;
using std::cin;
using std::endl;

const int NAME_LEN = 20;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

typedef struct {
	int accID;
	int balance;
	char cusName[NAME_LEN];
} Account;

Account accArr[100];
int accNum = 0;

int BankVer1() {
	int choice;

	while (1) {
		ShowMenu();
		cout << "���� : ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case MAKE:
			MakeAccount();
			break;

		case DEPOSIT:
			DepositMoney();
			break;

		case WITHDRAW:
			WithdrawMoney();
			break;

		case INQUIRE:
			ShowAllAccInfo();
			break;

		case EXIT:
			return 0;

		default:
			cout << "Illegal selection.." << endl;
		}
	}
}

void ShowMenu() {
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. ���¹�ȣ ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void MakeAccount() {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID : "; cin >> id;
	cout << "�̸� : "; cin >> name;
	cout << "�Աݾ� : "; cin >> balance;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy_s(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney() {
	int money;
	int id;
	cout << "����ID : "; cin >> id;
	cout << "���ݾ� : "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (id == accArr[i].accID) {
			accArr[i].balance += money;
			cout << "�ԱݿϷ�" << endl;
			return;
		}
	}

	cout << "��ȿ���� ���� ID�Դϴ�." << endl;
}

void WithdrawMoney() {
	int money;
	int id;
	cout << "����ID : "; cin >> id;
	cout << "��ݾ� : "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (id == accArr[i].accID) {
			if (accArr[i].balance < money) {
				cout << "������ ���� ���ġ �ʽ��ϴ�." << endl;
				return;
			}

			else {
				accArr[i].balance -= money;
				cout << "��ݿϷ�" << endl;
				return;
			}
		}
	}

	cout << "��ȿ���� ���� ID�Դϴ�." << endl;
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		cout << "����ID : " << accArr[i].accID << endl;
		cout << "�̸� : " << accArr[i].cusName << endl;
		cout << "�ܾ� : " << accArr[i].balance << endl;
	}
}