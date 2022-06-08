#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 * @n: first parameter
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	putchar('\n');
}
