
/*
integer_array.c -- A demostration of array manipulation with integers.
Written by Moths in the Machine, 2025-04-08
*/

/* Preprocessor statements */

#include <stdio.h> 
#include <stdlib.h>

#define MAX 40

/* Function Prototypes */
int* createArray(int size);
void fillArray(int* array, int min, int max);
void printArray(int* array);
void sort(int* array, int descending);

/* Main */

int main(void) {
	printf("Hello Arrays with Integers.\n");
	
	/* Allocate array */
	int* arr;
	if ((arr = createArray(MAX)) == NULL) {
		printf("There was an error creating the array. ");
		printf("Leaving the program.\n");
		return 0;
	}
	printf("Array stored at %p.\n", arr);

	/* Fill array with random numbers between 1 and 99, inclusive */
	int min = 1;
	int max = 99;
	printf("Filling array with random integers between ");
	printf("%d and %d, inclusive,...\n", min, max);
	fillArray(arr, min, max);

	/* Display the array and the size of it */
	printArray(arr);

	/* Sort the array from lowest to highest number, and display again */
	sort(arr, 0);
	printArray(arr);

	/* Sort the array from highest to lowest number, and display again */
	sort(arr, 1);
	printArray(arr);

	printf("Goodbye cruel world.\n\n");
	return 0;
}


/* Function definitions */

int* createArray(int size) {
	int* ptr = (int*)malloc(sizeof(int) * size);
	return ptr;
}

void fillArray(int* array, int min, int max) {
	for (int i = 0; i < MAX-1; i++) {
		int val = (rand() % max) + min;
		array[i] = val;
	}
}

void printArray(int* array) {
	printf("{ ");
	for (int i = 0; i < MAX-1; i++) {
		printf("%2d ", array[i]);
	}
	printf("}\n");
}

void sort(int* array, int descending) {
	/* Use bubble sort algorithm */
	if (descending) {
		/* Descending order */
		for (int i = 0; i < MAX-1; i++)
			for (int j = 0; j < MAX-1-i; j++)
				if (array[j] < array[j+1])
				{
					int temp = array[j];
					array[j] = array[j+1];
					array[j+1] = temp;
				}
	} else {
		/* Ascending order */
		for (int i = 0; i < MAX-1; i++)
			for (int j = 0; j < MAX-1-i; j++) 
				if (array[j] > array[j+1])
				{
					int temp = array[j];
					array[j] = array[j+1];
					array[j+1] = temp;
				}
	}
}
