#include "mainHeader.h"
#include "SquareISA.h"

using namespace std;

class Rectangle {
private :
	int height;
	int weight;
public :
	Rectangle(int height, int weight) {
		this->height = height;
		this->weight = weight;
	}

	void ShowAreaInfo() const {
		cout << "¸éÀû : " << height * weight << endl;
	}
};

class Square : public Rectangle {
public :
	Square(int length) : Rectangle(length, length) {}
};

void SquareMain() {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
}