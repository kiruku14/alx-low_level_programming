#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n: first parameter
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int x;

	x = 98;

	if (n < x);
	{
		for (; n <= x; n++)
		{
			if (n == 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				break;
			}
			else
			{
				if (n >= -9 && n <= 9)
				{
					if (n < 0)
					{
						_putchar('-');
						_putchar((n * -1) + '0');
						_putchar(',');
						_putchar(' ');
					}
					else if (n >= 0)
					{
						_putchar(n + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				else if (n >= 100)
				{
					_putchar((n / 100) + '0');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
				}
			}
		}
	_putchar('\n');
	}
	else if (n == 0)
	{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
	}
	else
	{
	for (; n >= x; n--)
	{
		if (n == 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			break;
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
	return;
}
