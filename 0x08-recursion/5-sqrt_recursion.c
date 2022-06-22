#include "main.h"

/**
 * _sqrt - checks for natural sqrts
 * @g: first parameter
 * @c: 2nd parameter
 *
 * Return: null
 */

int _sqrt(int g, int c)
{
	if ((g * g) == c)
		return (g);
	if ((g * g) > c)
		return (-1);
	return (_sqrt(g + 1, c));
}

/**
 * _sqrt_recursion - prints square root
 * @n: integer variable
 *
 * Return: null
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (_sqrt(1, n));
}
