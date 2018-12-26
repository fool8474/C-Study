class Calculator {
private :
	int countAdd;
	int countSub;
	int countMul;
	int countDiv;
public :
	double Add(double a, double b);
	double Sub(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);
	void ShowOpCount();
	void Init();
};