#include "main.h"

/**
 * swap_int - swaps integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
