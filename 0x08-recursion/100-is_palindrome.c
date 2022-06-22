#include "main.h"

/**
 * _check - checks for palindrome
 * @s: string
 * @start: moves from right to left
 * @end: moves from left to right
 * @pair: integer
 *
 * Return: null
 */

int _check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (_check(s, start + 1, end - 1, pair));
}

/**
 * _last_index - gives strings last index
 * @s: pointer to string
 *
 * Return: null
 */

int _last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += _last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - checks for palindrome
 * @s: string
 *
 * Return: null
 */

int is_palindrome(char *s)
{
	int end = _last_index(s);

	return (_check(s, 0, end - 1, end % 2));
}
