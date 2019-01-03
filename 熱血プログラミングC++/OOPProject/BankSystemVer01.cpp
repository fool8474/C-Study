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

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy_s(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney() {
	int money;
	int id;
	cout << "계좌ID : "; cin >> id;
	cout << "예금액 : "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (id == accArr[i].accID) {
			accArr[i].balance += money;
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
		if (id == accArr[i].accID) {
			if (accArr[i].balance < money) {
				cout << "계좌의 돈이 충분치 않습니다." << endl;
				return;
			}

			else {
				accArr[i].balance -= money;
				cout << "출금완료" << endl;
				return;
			}
		}
	}

	cout << "유효하지 않은 ID입니다." << endl;
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		cout << "계좌ID : " << accArr[i].accID << endl;
		cout << "이름 : " << accArr[i].cusName << endl;
		cout << "잔액 : " << accArr[i].balance << endl;
	}
}