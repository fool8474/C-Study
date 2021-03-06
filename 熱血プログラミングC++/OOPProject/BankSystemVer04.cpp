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

	int GetAccID() const {
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

	void ShowAccInfo() const {
		cout << "계좌ID : " << accID << endl;
		cout << "이름 : " << cusName << endl;
		cout << "잔액 : " << balance << endl;
	}

	~Account() {
		delete[] cusName;
	}
};

Account * accArr[100];
int accNum = 0;

int BankVer4() {
	int choice;

	while (1) {
		ShowMenu();
		cout << "선택 : ";
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
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌번호 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount() {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : "; cin >> id;
	cout << "이름 : "; cin >> name;
	cout << "입금액 : "; cin >> balance;

	accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney() {
	int money;
	int id;
	cout << "계좌ID : "; cin >> id;
	cout << "예금액 : "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (id == accArr[i]->GetAccID()) {
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl;
			return;
		}
	}

	cout << "유효하지 않은 ID입니다." << endl;
}

void WithdrawMoney() {
	int money;
	int id;
	cout << "계좌ID : "; cin >> id;
	cout << "출금액 : "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (id == accArr[i]->GetAccID()) {
			if (accArr[i]->withdraw(money) == 0) {
				cout << "계좌의 돈이 충분치 않습니다." << endl;
				return;
			}

			else {
				cout << "출금완료" << endl;
				return;
			}
		}
	}

	cout << "유효하지 않은 ID입니다." << endl;
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}