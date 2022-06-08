#include "main.h"
/**
 * times_table - prints multiplication table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			x = i * j;
			_putchar(',');
			_putchar(' ');
			if (x >= 10)
			{
				_putchar(x / 10 + 48);
				_putchar(x % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(x + 48);
			}
		}
		_putchar('\n');
	}
}
