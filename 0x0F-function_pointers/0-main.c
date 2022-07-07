#include <stdio.h>
#include "main.h"

/**
 * print_name_as_is - prints the name as it is
 * @name: name string
 *
 * Return: nothing
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - prints name in uppercase
 * @name: string name
 *
 * Return: null
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}

/**
 * main - entry point
 *
 * Return: null
 */
int main(void)
{
	print_name("Brian", print_name_as_is);
	print_name("Ndichu Kiruku", print_name_uppercase);
	printf("\n");
	return (0);
}
