#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: character being tested
 *
 * Return: 1 for success
 * and 0 for fail
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
