
/*
integer_array.c -- A demostration of array manipulation with integers.
Written by Moths in the Machine, 2025-04-08
*/


/* Preprocessor statements */

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define MAX 10


/* Function Prototypes */

int* createArray(int size);
void fillArray(int* array, int min, int max);
void printArray(int* array);
void bubbleSortDescending(int* array);
void bubbleSortAscending(int* array);
int linearSearchForInt(int* array, int val);


/* Main */

int main(void) {
	printf("Hello Arrays with Integers.\n");


	/* Change seed for random numbers */
	srand(time(NULL));
	

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


	/* Display the array's integers */
	printArray(arr);


	/* Search for an integer in the array (not found) */
	int findMe = 100;
	int pos = -1;
	printf("Looking for integer %d in the array... ", findMe);
	if ((pos = linearSearchForInt(arr, findMe)) == -1)
		printf("The integer was not found.\n");
	else
		printf("The integer was found at position %d in the array.\n", pos);
	

	/* Search for an integer in the array (found) */
	findMe = arr[(rand() % MAX)];
	pos = -1;
	printf("Looking for integer %d in the array... ", findMe);
	if ((pos = linearSearchForInt(arr, findMe)) == -1)
		printf("The integer was not found.\n");
	else
		printf("The integer was found at position %d in the array.\n", pos);	
	

	/* Search for an integer in the array (found or not found) */
	findMe = (rand() % max) + min;
	pos = -1;
	printf("Looking for integer %d in the array... ", findMe);
	if ((pos = linearSearchForInt(arr, findMe)) == -1)
		printf("The integer was not found.\n");
	else
		printf("The integer was found at position %d in the array.\n", pos);


	/* Sort the array from lowest to highest number, and display again */
	printf("Sorting the array from lowest to highest number...\n");
	bubbleSortAscending(arr);
	printArray(arr);


	/* Sort the array from highest to lowest number, and display again */
	printf("Sorting the array from highest to lowest number...\n");
	bubbleSortDescending(arr);
	printArray(arr);
	

	/* End program */
	printf("Goodbye cruel world.\n\n");
	return 0;
}


/* Function definitions */

int* createArray(int size) {
	int* ptr = (int*)malloc(sizeof(int) * size);
	return ptr;
}


void fillArray(int* array, int min, int max) {
	for (int i = 0; i < MAX; i++) {
		int val = (rand() % max) + min;
		array[i] = val;
	}
}


void printArray(int* array) {
	printf("{ ");
	for (int i = 0; i < MAX; i++) {
		printf("%2d ", array[i]);
	}
	printf("}\n");
}


void bubbleSortDescending(int* array) {
	for (int i = 0; i < MAX-1; i++) {
		for (int j = 0; j < MAX-1-i; j++) {
			if (array[j] < array[j+1]) {
				int temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
}


void bubbleSortAscending(int* array) {
	for (int i = 0; i < MAX-1; i++) {
		for (int j = 0; j < MAX-1-i; j++) {
			if (array[j] > array[j+1]) {
				int temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
}


int linearSearchForInt(int* array, int val) {
	int count = 0;
	int pos = -1;
	for (int i = 0; i < MAX-1; i++) {
		count++;
		if (array[i] == val) {
			pos = i;
			break;
		}
	}
	printf("(%d comparisons) ", count);
	return pos;
}


int binarySearchForInt(int* array, int val) {
	return -1;
}