#include "calc_func.h"
#include <stdio.h>
#include <math.h>

int main() {
	char op;
	double a, b, res = 0;
	int valid_operation = 1;

	printf("Enter an operator (+, -, *, /, !, r(sqr)): ");
	scanf(" %c", &op);

	if (op == '!' || op == 'r') {
		printf("Enter operand: ");
		if (scanf("%lf", &a) != 1) {
			printf("Error: Invalid input (not a number)\n");
			return 1;
		}
	} else {
		printf("Enter two operands: ");
		if (scanf("%lf %lf", &a, &b) != 2) {
			printf("Error: Invalid input (not numbers)\n");
			return 1;
        }
	}

	switch (op)
	{
	case '+':
		res = sum(a, b);
		break;
	case '-':
		res = diff(a, b);
		break;
	case '*':
		res = product(a, b);
		break;
	case '/':
		res = fraction(a, b);
		break;
	case '!':
		if (a < 0 || (a != (int)a)) {
			printf("Error: Factorial defines only for non-negative integers.\n");
			valid_operation = 0;
		} else {
			res = (double)factorial((unsigned int)a);
		}
		break;
	case 'r':
		res = findSQRT(a);
		break;
	default:
		printf("Error! Incorrect Operator Value\n");
		valid_operation = 0;
	}

	if (valid_operation && !isnan(res)) {
		printf("Result: %.2lf\n", res);
	}

	return 0;
}