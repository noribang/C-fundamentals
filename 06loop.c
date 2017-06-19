#include <stdio.h>

int main() {

	// #1 Initialization step
	int a;
	int b = 10;

	printf("int b = %d\n", b);
	printf("Enter a value for a: ");
	scanf("%d", &a);
	printf("Value entered for int a = %d\n", a);

	while (a < b) // #2 Test step
	{
		printf("int b = %d\n", b);
		printf("int a = %d\n", a);
		a = a + 1;// #3 Increment step
	}

	return 0;
}