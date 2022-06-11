#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draw diagonal line
 * @n: integer
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				putchar(32);
			}

			putchar(92);
			putchar('\n');
		}
	}
}
