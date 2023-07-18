#include "_printf.h"
/**
 *  _putchar - This is a function used to print out characters
 *  @c: a varaible that used to return a character that needs to be printed. 
 *  Return: Always return the character been passed into it
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
