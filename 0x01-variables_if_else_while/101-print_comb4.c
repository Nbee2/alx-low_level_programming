#include <stdio.h>
/**
* main - print possible combo of 3
*
* Return: returns zero at the end
*/
int main(void)
{
	int n, p, m;

	for (n = 0; n <= 9; n++)
	{
		for (p = 1; p <= 9; p++)
		{
			for (m = 2; m <= 9; m++)
			{
				if (m > p && p > n)
				{
					putchar(n + '0');
					putchar(p + '0');
					putchar(m + '0');
						if (n != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n';
	return (0);
}
