#include <stdio.h>


int main() {
	int x = 1;

	while(x<10) {
		printf("while loop #1 = %d\n", x);
		x++;
	}

	for(x=1; x<10; x++) {
		printf("for loop #2 = %d\n", x);
	}

	int a = 1;
	int b = 8;
	while(a<b) {
		a++;
		printf("while loop #2 = %d\n", a);
	}

	for(a=1,b=8; a < b; a++, printf("for loop #2 = %d\n", a));

	return 0;
}