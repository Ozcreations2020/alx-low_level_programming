#include "main.h"

/**
 * _sstrlen_recursion - Returns the length of string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
in _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
