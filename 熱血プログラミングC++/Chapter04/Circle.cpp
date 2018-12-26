#include "mainHeader.h"

using namespace std;

Circle::Circle(int x, int y, int radius) : pt(x, y)
{
	this->radius = radius;
}

Point Circle::getPt() const
{
	return pt;
}

int Circle::getRadius() const
{
	return radius;
}

void Circle::ShowCircleInfo() const
{
	cout << "radius : " << getRadius() << endl;
	getPt().ShowPointInfo();
}
