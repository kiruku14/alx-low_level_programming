#include "main.h"
#include <stdio.h>

/**
 * print_array - array creation
 * @a: 1st variable
 * @n: 2nd variable
 *
 * Return: null
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <  n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}

	printf("\n");
}
