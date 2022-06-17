#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes string
 * @c: character
 *
 * Return: null
 */

char *cap_string(char *c)
{
	int i, j;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[0] >= 97 && c[0] <= 122)
			c[0] = c[0] - 32;
				for (j = 0; delimeters[j] != '\0'; j++)
					if (c[i] == delimeters[j] && c[i + 1] >= 97 && c[i + 1] <= 122)
						c[i + 1] = c[i + 1] - 32;
	}
	return (c);
}
