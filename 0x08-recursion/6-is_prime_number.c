#include "main.h"

/**
 * _prime - checks for prime numbers
 * @b: factor checked
 * @p: possible prime no.
 *
 * Return: null
 */

int _prime(int b, int p)
{
	if (p < 2 || p % b == 0)
		return (0);
	else if (b > p / 2)
		return (1);
	else
		return (_prime(b + 1, p));
}

/**
 * is_prime_number - prints prime numbers
 * @n: variable to check
 *
 * Return: null
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (_prime(2, n));
}
