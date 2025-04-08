/* 
Sloth Bytes Weekly Challenge -- Apr 2, 2025

Message from Space

You have received an encrypted message from space. Your task is to decrypt the message with the following simple rules:
- Message string will consist of capital letters, numbers, and brackets only.
- When there's a block of code inside the brackets, such as [10AB], it means you need to repeat the letters AB for 10 times.
- Message can be embedded in multiple layers of blocks.
- Final decrypted message will only consist of capital letters.
- Create a function that takes encrypted message str and returns the decrypted message.

Examples:

	spaceMessage("ABCD")
	output = "ABCD"
	
	spaceMessage("AB[3CD]")
	output = "ABCDCDCD"
	# "AB" = "AB"
	# "[3CD]" = "CDCDCD"
	# Combine both = "ABCDCDCD"
	
	spaceMessage("IF[2E]LG[5O]D")
	output = "IFEELGOOOOOD"
*/

/*
MessageFromSpace.c -- Decrypt a message from space
Written by Moths in the Machine, Apr. 2, 2025
*/
#include <stdio.h>

int main(void) {
	printf("Hello world.\n");

	/* Read the characters from buffer */

	/* If the character is a digit, cast the digit as an integer */

	/* Check if next character is also a digit. If not, end the cast. Remember that num = num*10 + new_dig. */

	/* Read the next characters until the closing bracket is reached */

	/* Use a counted loop to repeat those characters num times */

	/* Output the message */
	
	printf("%60s", "Goodbye cruel world.\n\n");
	return 0;
}
