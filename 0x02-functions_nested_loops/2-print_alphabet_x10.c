#include "main.h"
/**
 * print_alphabet_x10 - function to print 
 * abc 10 times
 * 
 * Description: using a function
 * this program prints an alphabet 10 times
 * Return: 0
 */
void print_alphabrt_x10(void)
{
	char c, i;

	for (i = '0'; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
