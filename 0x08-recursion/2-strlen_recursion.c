#include "main.h"

/**
 * _strlen_recursion - gives length of string
 * @s: pointer to string
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
