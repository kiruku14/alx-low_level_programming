#include "main.h"

/**
 * _strchr - locates char in string
 * @s: string
 * @c: character
 *
 * Return: null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
