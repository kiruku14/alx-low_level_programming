#include "main.h"

/**
 * factorial - evaluates factorial of given int
 * @n: variable
 *
 * Return: null
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
