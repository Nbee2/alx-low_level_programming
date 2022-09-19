#include<stdio.h>
#include<string.h>
#include "main.h"
/**
* print_rev - Write a function that reverses a string.
* @s: The string tp print
* Return: Void
*/
void rev_string(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	for (k -= 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
