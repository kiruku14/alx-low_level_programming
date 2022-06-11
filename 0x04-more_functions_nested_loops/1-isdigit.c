#include "main.h"

/**
 * _isdigit - picks int
 * @c: character checked
 *
 * Return: 1 OR 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
