#include "main.h"
/**
* function that prints sign of a number.
* n: is the int that will be use for the
* argument of the function.
* Return: 0
*/

int print_sign(int n)
{
	if (n > 0) 
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_purchar('0');
	return (0);	
	}
}
