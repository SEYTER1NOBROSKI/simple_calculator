#include "calc_func.h"

unsigned long long factorial(const unsigned int n) {
	unsigned long long fact = 1;
	unsigned int i;

	for (i = 1; i <= n; i++) {
		fact *= i;
	}

	return fact;
}