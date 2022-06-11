#include "main.h"
#include <stdio.h>

/**
 * print_line - draw a line
 * @n: integer
 *
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar(95);
		}

		putchar('\n');
	}
}
