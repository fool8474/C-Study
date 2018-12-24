#include "mainHeader.h"
#include "03.h"

using namespace std;

void Q3Main(){
	cout << BoxVolume(3, 3, 3) << endl;
	cout << BoxVolume(5, 5) << endl;
	cout << BoxVolume(7) << endl;
	cout << BoxVolume() << endl;
}

int BoxVolume(int length, int width, int height) {
	return length * width * height;
}

int BoxVolume(int length, int width) {
	return length * width;
}

int BoxVolume(int length) {
	return length;
}

int BoxVolume() {
	return 1;
}
