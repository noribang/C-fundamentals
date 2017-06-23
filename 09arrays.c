#include <stdio.h>

int main() {
	printf("=======================\n");
	printf("FIRST ARRAY\n");		
	printf("=======================\n");	

	int a[5];

	a[0] = 12;
	a[1] = 9;
	a[2] = 14;
	a[3] = 5;
	a[4] = 1;

	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);

	printf("=======================\n");
	printf("SECOND ARRAY\n");		
	printf("=======================\n");	

	int c[4] = {3, 52, 9821, 5};
	int e;
	for(e=0; e<4; e++) {
		printf("%d\n", c[e]);
	}

	printf("=======================\n");
	printf("THIRD ARRAY\n");		
	printf("=======================\n");
	int b[] = {78, 67, 9};
	// int f;
	for(int f=0; f<3; f++) {
		printf("%d\n", b[f]);
	}
	
	printf("=======================\n");
	printf("FOURTH ARRAY\n");		
	printf("=======================\n");
    int d[5];
    int i, j;

    for (i=0; i<5; i++)
        d[i]= i + 3;
    for (j=0; j<5; j++)
        printf("d[%d] = %d\n", j, d[j]);	

	return 0;
}