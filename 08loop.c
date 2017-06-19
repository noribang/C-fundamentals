#include <stdio.h>

int main() {
	printf("=======================\n");
	printf("FIRST WHILE LOOP\n");		
	printf("=======================\n");

	int a;
	a = 0;// #1 Starting
	while(a <= 100) {// #2 Test
		printf("%4d degrees F = %4d degrees C\n", a, (a - 32) * 5/9);// #2 Ending 
		a = a + 10;// #3 Increment
	}

	printf("=======================\n");
	printf("SECOND WHILE LOOP\n");		
	printf("=======================\n");
	float b;
	b = 0;
	while(b <=100) {
		printf("%6.3f degrees F = %6.3f degrees C\n", b, (b - 32.0)
			* 5.0 / 9.0);
		b = b + 10;
	}

	printf("=======================\n");
	printf("THIRD WHILE LOOP\n");		
	printf("=======================\n");

	float c;
	c = 0;// #1 INITIAl
	while(c <= 100) {// #2 TEST
		if(c > 98.6) {// When c == 100 this will be triggered.
			printf("%6.2f degrees F = %6.2f degrees C\n", 98.6, (98.6 - 32.0) * 5.0/9.0);
		}
		printf("%6.2f degrees F = %6.2f degrees C\n", c, (c - 32.0) * 5.0 / 9.0);

		c = c + 10;// #3 INCREMENT
	}

	printf("=======================\n");
	printf("FOURTH WHILE LOOP\n");		
	printf("=======================\n");
	// THIS IS A SOLUTION TO WHEN WHILE(VAR <= 200)
	float d, e;
	d = 0;
	e = -1;

	printf("THIS IS A SOLUTION TO WHEN WHILE(VAR <= 200)\n");
	while(d <= 200) {
		if((d > 98.6) && (e < 98.6)) {
			printf("%6.2f degrees F = %6.2f degrees C\n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);
		}
		printf("%6.2f degrees F = %6.2f degrees C\n", d, (d - 32.0) * 5.0 / 9.0);

		e = d;
		d = d + 10;
	}

	return 0;
}