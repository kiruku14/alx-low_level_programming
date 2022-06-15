#include "main.h"
#include <stdio.h>

/**
 * puts2 - Entry point
 * @s: parameter
 *
 * Return: null
 */

void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(s[i]);
		i++;
	}

	putchar('\n');
}
