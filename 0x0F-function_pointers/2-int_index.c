#include "function_pointers.h"

/**
 * int_index - search for int type
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to comparison function
 * Return: null
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
