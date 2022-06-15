#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints last half of string
 * @s: variable
 *
 * Return: null
 */

void puts_half(char *s)
{
	int i = 0;
	int n;

	while (s[i] != '\0')
		i++;

	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n = i / 2;

	for (; s[n] != '\0'; n++)
		putchar(s[n]);

	putchar('\n');
}
