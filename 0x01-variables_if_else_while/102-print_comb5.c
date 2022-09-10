#include <stdio.h>
/**
* main - print possible combination of two 2-digit
* numbers
*
* Return: returns zero at the end
*/
int main(void)
{
	int i, q;
	
	for  (i = 0; i < 100; i++)
	{
		for (q = 0; q < 100; q++)
		{
			if (p > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((q / 10) + '0');
				putchar((q % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
