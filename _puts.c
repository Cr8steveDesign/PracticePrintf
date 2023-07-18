#include "_printf.h"

/** 
 * _puts - A function used to return a string.
 * Return: Return number of characters sucessfully printed
 */

int _puts(char *str)
{
	int i = 0;

	while (*str)
	{
		write(1, str, 1);
		str++;
		i++;
	}
	return (i);
}
