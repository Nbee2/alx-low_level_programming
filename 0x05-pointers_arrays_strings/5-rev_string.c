#include<stdio.h>
#include<string.h>
#include "main.h"
/**
* print_rev - Write a function that reverses a string.
* @s: The string to printed in reverse
* Return: Void
*/

void rev_string(char *s);
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);

}
