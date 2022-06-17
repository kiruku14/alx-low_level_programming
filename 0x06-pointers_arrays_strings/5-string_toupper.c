#include "main.h"

/**
 * string_toupper - change lowercase to upper
 * @string: parameter
 *
 * Return: null
 */

char string_toupper(char *string)
{
	int i = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 97 && string[i] <= 122)
		{
			string[i] = string[i] - 32;
		}
	}
	
	return (string);
}
