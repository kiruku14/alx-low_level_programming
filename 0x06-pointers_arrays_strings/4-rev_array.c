#include "main.h"

/**
 * reverse_array - reverse order of array
 * @a: first parameter
 * @n: 2nd parameter
 *
 * Return: null
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
