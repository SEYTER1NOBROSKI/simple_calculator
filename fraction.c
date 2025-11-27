#include "calc_func.h"
#include <stdio.h>

double fraction(const double numerator, const double denominator) {
	if (denominator == 0) {
		printf("Division by zero is not possible.");
		return NAN;
	} 
	return numerator / denominator;
}