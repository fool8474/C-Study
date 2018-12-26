#include "mainHeader.h"

using namespace std;

void Ring::Init(int innerX, int innerY, int innerRad, int outerX, int outerY, int outerRad)
{
	circleInner.Init(innerX, innerY, innerRad);
	circleouter.Init(outerX, outerY, outerRad);
}

Circle Ring::getInnerCircle() const
{
	return circleInner;
}

Circle Ring::getOuterCircle() const
{
	return circleouter;
}

void Ring::ShowRingInfo() const
{
	cout << "Inner Circle Info.." << endl;
	getInnerCircle().ShowCircleInfo();
	cout << "Outer Circle Info.." << endl;
	getOuterCircle().ShowCircleInfo();
}
