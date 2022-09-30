#include "main.h"

int actual_prime(int n, int i);

/**
* is_prime_number - indicates a prime number
* @n: number to be checked
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_number(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime
 * @n: number to be checked
 * @s: number to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int s)
{
	if (s == 1)
		return (1);
	if (n % s == 0 && s > 0)
		return (0);
	return (actual_prime(n, s - 1));
}
