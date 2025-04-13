/* Programming Exercises, p54
Write a program that creates an integer variable called toes. Have the program
set toes to 10. Also have the program calculate what twice toes is and what
toes squared is. The program should print all three values, identifying them.
*/
#include <stdio.h>

int main(void) {
	int toes = 10;
	printf("You have %d toes.\nTwice the amount would be %d, ", toes, 2 * toes);
	printf("and that amount squared would be %d.\n", toes * toes);
	return 0;
}