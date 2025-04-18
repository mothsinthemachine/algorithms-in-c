/*
Author: Moths in the Machine
Created: 2025-04-18
*/
#include <iostream>
#include <vector>
using namespace std;


/* I put this up here because I'm weird. */
void hello(void) {
	cout << "~~~~~~~~~~~~~~~~~~~\n";
	cout << "|| Ceasar Cipher ||\n";
	cout << "~~~~~~~~~~~~~~~~~~~" << endl;
}


void goodbye();
void dispCipher(int val, char* []);


int main(int argc, char* argv[]) {
	/* 
	By convention, argv[0] is the command with which
	the program is invoked. argv[1] is the first
	command-line argument. The last argument from 
	the command like is argv[argc-1], and argv[argc]
	is always NULL. 
	*/
	hello();
	dispCipher(argc, argv);
	goodbye();
	return 0;
}


void goodbye(void) {
	cout << "Goodbye cruel world.\n" << endl;
}


void dispCipher(int val, char* arr[]) {
	for (int i = 1; i < val; i++) {
		cout << arr[i] << '\n';
	}
}