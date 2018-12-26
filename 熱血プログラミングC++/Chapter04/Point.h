#pragma once

class Point {
private :
	int xpos, ypos;

public :
	Point(int x, int y);
	void ShowPointInfo() const;
	int getXpos() const;
	int getYpos() const;
};