#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: null
 */

int _strcmp(char *s1, char *s2)
{
	int difference = 0;
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			difference = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
		i++;
	}
	return (difference);
}
