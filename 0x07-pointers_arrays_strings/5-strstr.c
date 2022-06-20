#include "main.h"

/**
 * _strstr - finds a string in a substring
 * @haystack: what to search for
 * @needle: where to search
 *
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
