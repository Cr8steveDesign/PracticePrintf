#include "_printf.h"
#include <stdio.h>

/**
 * main: Entry of the code
 * The main purpose is to test the functions
 * Return: Always 0
 */

int main(void)
{
	char *str;
	//int i;

         str = "Boss Stephen";

	int counter = _puts("Boss Stephen is a guru \n");

	printf("%d\n", counter);

	_puts(str);
	_puts("\n");
}      
