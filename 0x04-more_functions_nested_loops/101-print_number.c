#include <stdio.h>
#include "main.h"

/**
* print_number - Prints a number
* @n: The number to print
*/

void print_number(int num)
{
	unsigned int num1;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	else
	{
		num1 = num;
	}

	if (num1 / 10)
	{
		print_number(num1 / 10);
	}
	_putchar((num1 % 10) + '0');
}
