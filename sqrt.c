#include "calc_func.h"
#include <stdio.h>

double findSQRT (const double n) {
	if (n < 0) {
		printf("Error: Square root of negative number!\n");
		return NAN;
	}
	return sqrt(n);
}