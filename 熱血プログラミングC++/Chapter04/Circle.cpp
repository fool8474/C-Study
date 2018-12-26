#include "mainHeader.h"

using namespace std;
void Circle::Init(int x, int y, int radius)
{
	pt.Init(x, y);
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
