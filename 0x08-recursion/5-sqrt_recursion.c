#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_root(n, 0));
}

/**
 * real_root - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */
int real_root(int n, int x)
{
	if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	return (real_root(n, x + 1));
}
