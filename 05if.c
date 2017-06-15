#include <stdio.h>

int main() {
	int b;
	printf("Enter a value: ");
	scanf("%d", &b);// Need to use "" for %d operator.
	if(b < 0 ) {
		printf("The value of int b = %d is negative.\n", b);
	}
	else if(b > 0) {
		printf("The value of int b = %d is positive.\n", b);
	}
	else {
		printf("The value of int b = %d is zero.\n", b );
	}

	int j, k, q, x, y, z;

	printf("Enter a value for x: ");
	scanf("%d", &x);
	printf("Enter a value for y: ");
	scanf("%d", &y);
	printf("Enter a value for j: ");
	scanf("%d", &j);
	printf("Enter a value for k: ");
	scanf("%d", &k);

	if((x == y) && (j > k)) {
		z = 1;
		printf("The value of z = %d.\n", z);
	}
	else {
		q = 10;
		printf("The value of q = %d.\n", q);
	}

	return 0;
}