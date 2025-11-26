#include "calc_func.h"
#include <stdio.h>

double sum(double a, double b) {
	return a + b;
}

double diff(double a, double b) {
	return a - b;
}

double product(double a, double b) {
	return a * b;
}

double fraction(double numerator, double denominator) {
	if (denominator == 0) {
		printf("Division by zero is not possible.");
		return NAN;
	} 
	return numerator / denominator;
}

unsigned long long factorial(unsigned int n) {
	unsigned long long fact = 1;
	unsigned int i;

	for (i = 1; i <= n; i++) {
		fact *= i;
	}

	return fact;
}

double findSQRT (double n) {
	if (n < 0) {
		printf("Error: Square root of negative number!\n");
		return NAN;
	}
	return sqrt(n);
}