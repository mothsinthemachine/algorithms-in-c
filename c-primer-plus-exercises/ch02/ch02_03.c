/* Programming Exercises, p53
3. Write a program that converts your age in years to days and displays both
values. At this point, don't worry about fractional years and leap years. 
*/
#include <stdio.h>

int main(void) {
	int age = 38;
	int days = age * 365;
	printf("Your age in years is %d. That is almost %d days.\n");
	return 0;
}