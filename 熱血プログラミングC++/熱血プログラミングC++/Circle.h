#pragma once
#include "Point.h"

class Circle {
private :
	Point pt;
	int radius;
public :
	void Init(int x, int y, int radius);
	Point getPt() const;
	void ShowCircleInfo() const;
	int getRadius() const;
};


