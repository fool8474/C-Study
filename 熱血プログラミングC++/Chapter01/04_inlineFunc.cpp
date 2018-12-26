#include "mainHeader.h"
#include "04_inlineFunc.h"

template <typename T> //テンプレートの生成
inline T SQUARE(T x) {
	return x * x;
}

void inlineFunc() {
	std::cout << SQUARE(5.5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
}
