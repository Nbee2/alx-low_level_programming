#include <stdio.h>
/**
* main - printsingle digit numbers starting from 0
*
* Return: zero at the end
*/
int main(void)
{
int n, m;

for (n = 0; n <= 9; n++)
{
	for (m = 1; m <= 9; m++)
	{
		if (m > n)
		{
			putchar(n +'0');
			putchar(m + '0');
			if (n != 8)
			{
				putchar(',');
				putchar('');
			}
		}
	}
}
putchar('\n');
return (0);
}
