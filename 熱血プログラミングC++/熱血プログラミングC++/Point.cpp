#include "mainHeader.h"

void Point::Init(int x, int y)
{
	xpos = x;
	ypos = y;
}

void Point::ShowPointInfo() const
{
	cout << "[" << getXpos() << ", " << getYpos() << "]" << endl;
}

int Point::getXpos() const
{
	return xpos;
}

int Point::getYpos() const
{
	return ypos;
}
