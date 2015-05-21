/*
 * 1) Extern variables can be used only, if they are declared as global 
 * 2) Here int i; inside the main is different and the int i declared as global is different
 * 3) If this program extern.c alone is executed, there wont be any error
 * 4) If this program along with func1.c is executed, error will be thrown as, 
	/tmp/ccFzuqEX.o:(.data+0x0): multiple definition of `i'
	/tmp/cc3SIKPK.o:(.data+0x0): first defined here
	collect2: ld returned 1 exit status	 
 */

#include<stdio.h>

void func1();

//int i = 30;

int main()
{
	int i = 10;

	printf(" The value of i inside main is : %d \n", i);
	func1();

	return 0;
}

