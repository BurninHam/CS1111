//integer addition program (hopefully)
#include <stdio.h>

int main() {
	int num1;
	int num2;
	char sign;
	printf("CHOOSE YOUR INTEGER EXPRESSION");
	scanf("%d %c %d", &num1, &sign, &num2);
	printf("operand 1: %d\n", num1);
	printf("operand 2: %d\n", num2);
	printf("operator: %c\n", sign);
}
