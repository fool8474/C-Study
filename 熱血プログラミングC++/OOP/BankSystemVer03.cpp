#include "mainHeader.h"

using std::cout;
using std::cin;
using std::endl;

const int NAME_LEN = 20;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

class Account {
private:
	int accID;
	int balance;
	char * cusName;

public:
	Account(int ID, int money, char * name) : accID(ID), balance(money) {
		cusName = new char[strlen(name) + 1];
		strcpy_s(cusName, sizeof(cusName), name);
	}

	Account(const Account & ref)
		: accID(ref.accID), balance(ref.balance)
	{
		cusName = new char[strlen(ref.cusName) + 1];
		strcpy_s(cusName, sizeof(cusName), ref.cusName);
	}

	int GetAccID() {
		return accID;
	}

	void Deposit(int money) {
		balance += money;
	}

	int withdraw(int money) {
		if (balance < money)
			return 0;

		balance -= money;
		return money;
	}

	void ShowAccInfo() {
		cout << "����ID : " << accID << endl;
		cout << "�̸� : " << cusName << endl;
		cout << "�ܾ� : " << balance << endl;
	}

	~Account() {
		delete[] cusName;
	}
};

Account * accArr[100];
int accNum = 0;

int BankVer3() {
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

	accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney() {
	int money;
	int id;
	cout << "����ID : "; cin >> id;
	cout << "���ݾ� : "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (id == accArr[i]->GetAccID()) {
			accArr[i]->Deposit(money);
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
		if (id == accArr[i]->GetAccID()) {
			if (accArr[i]->withdraw(money) == 0) {
				cout << "������ ���� ���ġ �ʽ��ϴ�." << endl;
				return;
			}

			else {
				cout << "��ݿϷ�" << endl;
				return;
			}
		}
	}

	cout << "��ȿ���� ���� ID�Դϴ�." << endl;
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}