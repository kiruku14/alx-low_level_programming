#include "main.h"

/**
 * _isupper - checks upper case
 * @c: Number checked
 *
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
