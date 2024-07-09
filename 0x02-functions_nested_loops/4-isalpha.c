#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 *
 * @c: The character to check (in ASCII code)
 *
 * Return: 1 if @c is a letter (uppercase or lowercase), 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
