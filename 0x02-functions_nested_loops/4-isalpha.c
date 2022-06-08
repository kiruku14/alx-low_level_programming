#include "main.h"

/**
 * _isalpha - chooses alphabetic characters
 * @c: character being tested
 *
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	return (0);
}
