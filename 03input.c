#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter the first value:");
	scanf("%d", &a);
	printf("Enter the second value:");
	scanf("%d", &b);
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	printf("Hello");
	printf("Hello\n");

	// %d is an operator
	// b is a variable
	// \n is a carriage return
	printf("The temperature is ");
	printf("%d", b);
	printf(" degrees\n");

	printf("The temperature is %d degrees\n", b);

	printf("%d, %d, %d\n", a, b, c);

	float e = 23.456563;
	char f = 'w';

	printf("float: %f\n", e);
	printf("character: %c\n", f);

	return 0;// Return true. Must be last line of instructions.

}