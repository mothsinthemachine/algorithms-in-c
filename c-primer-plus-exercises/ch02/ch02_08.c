/* Programming Exercises, p54
In C, one function can call another. Write a program that calls a function named
one_three(). This function should display the word one on one line, call a 
second function named two(), and then display the word three on one line. The
function two() should display the word two on one line. The main() function
should display the phrase starting now: before calling one_three() and display
done! after calling it. Thus, the output should look like the following:
starting now:
one
two
three
done!
*/
#include <stdio.h>

void two(void) {
	printf("two");
}

void one_three(void) {
	printf("one\n");
	two();
	printf("\nthree\n");
}

int main(void) {
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	return 0;
}