#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int list[MAX] = {1,8,4,6,0,3,5,2,7,9};

void display() {
	int i;
	printf("[");

	// navigate through all items in list array
	for(i = 0; i < MAX; i++) {
		printf("%d ", list[i]);
	}	

	printf("]\n");
}

void bubbleSort() {
	int temp;
	int i, j;

	bool swapped = false;

	// Loop through all numbers
	for(i = 0; i < MAX-1; i++) {
		// printf("i = %d\n", i);
		swapped = false;
		

		// Loop through numbers falling ahead
		for(j = 0; j < MAX-1-i; j++) {
			// printf("j = %d \n", j);
			printf("   Items compared: [%d %d] \n", list[j], list[j+1]);

			/*1. Check if next number is lesser than current
			  2. Swap th numbers
			  3. (Bubble up the highest number.)*/

			if(list[j] > list[j+1]) {//Check if left number is greater than right.
				temp = list[j];// Assign the left number to temp.
				list[j] = list[j+1];// Assign the value of right number to position of left number.
				list[j+1] = temp;// Assign left number to position of former right number.

				swapped = true;
				printf(" => swapped [%d, %d]\n",  list[j], list[j+1]);
			}
			else {
				printf(" => not swapped\n");
			}
		}// End second for loop

		/*If no number was swapped that means
		array is sorted now break the loop.*/
		if(!swapped) {
			break;
		}

		printf("Iteration %d#: ", (i+1));
		display();
	}// End first for loop
}// End bubbleSort()

int main() {
	printf("Input Array: ");
	display();
	printf("\n");

	bubbleSort();
	printf("\nOutput Array: ");
	display();

	return 0;
}