#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse
 * @s: variable
 *
 * Return: null
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		putchar(s[i]);

	putchar('\n');
}
