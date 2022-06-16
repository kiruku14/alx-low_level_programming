#include "main.h"

/**
 * _strncpy - copy string
 * @dest: first parameter
 * @src: 2nd parameter
 * @n: variable
 *
 * Return: null
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
