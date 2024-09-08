//integer addition program (hopefully)
#include <stdio.h>

int main() {
	double num1;
	double num2;
	char sign;
	printf("CHOOSE YOUR REAL EXPRESSION");
	scanf("%lf %c %lf", &num1, &sign, &num2);
	printf("operand 1: %lf\n", num1);
	printf("operand 2: %lf\n", num2);
	printf("operator: %c\n", sign);
}
