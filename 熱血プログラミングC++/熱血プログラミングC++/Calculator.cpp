#include "mainHeader.h"

using namespace std;

double Calculator::Add(double a, double b)
{
	countAdd++;
	return a + b;
}

double Calculator::Sub(double a, double b)
{
	countSub++;
	return a - b;
}

double Calculator::Mul(double a, double b)
{
	countMul++;
	return a * b;
}

double Calculator::Div(double a, double b)
{
	countDiv++;
	return a / b;
}

void Calculator::ShowOpCount()
{
	cout << "���� : " << countAdd << " ���� : " << countSub << " ���� : " << countMul << " ������ : " << countDiv << endl;
}

void Calculator::Init()
{
	countAdd = 0;
	countSub = 0;
	countMul = 0;
	countDiv = 0;
}
