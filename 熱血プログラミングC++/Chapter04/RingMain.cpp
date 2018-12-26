#include "mainHeader.h"
#include "RingMain.h"

void RingMain(void) {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
}