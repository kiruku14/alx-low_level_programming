#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints 0-9 (!=2 & 4)
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
