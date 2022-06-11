#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints digits
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 14; b++)
		{
			if (b > 9)
			{
				putchar((b / 10) + '0');
			}

			putchar((b % 10) + '0');
		}

		putchar('\n');
	}
}
