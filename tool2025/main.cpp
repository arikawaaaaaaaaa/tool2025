#include <stdio.h>
#include "mul_div.h"
#include "plu_min.h"

int main(void) {
	int a = 6;
	int b = 3;

	printf("%d + %d = %d\n", a, b, plu(a, b));
	printf("%d - %d = %d\n", a, b, min(a, b));
	printf("%d x %d = %d\n", a, b, mul(a, b));
	printf("%d / %d = %d\n", a, b, div(a, b));

	return 0;
}