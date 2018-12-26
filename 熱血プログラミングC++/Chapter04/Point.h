#pragma once

class Point {
private :
	int xpos, ypos;

public :
	void Init(int x, int y);
	void ShowPointInfo() const;
	int getXpos() const;
	int getYpos() const;
};