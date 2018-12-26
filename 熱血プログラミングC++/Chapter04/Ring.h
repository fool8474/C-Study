#pragma once
#include "Circle.h"

class Ring {
private :
	Circle circleInner;
	Circle circleouter;
	
public :
	Ring(int innerX, int innerY, int innerRad, int outerX, int outerY, int outerRad);
	Circle getInnerCircle() const;
	Circle getOuterCircle() const;
	void ShowRingInfo() const;
};