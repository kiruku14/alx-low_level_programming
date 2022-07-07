#include "main.h"

/**
 * print_name - prints a name
 * @name: string
 * @f: void function
 *
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
