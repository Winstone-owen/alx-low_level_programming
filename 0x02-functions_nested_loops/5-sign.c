#include "main.h"

/**
 * print_sign - Determines if the input number
 *              is greater than, equal to, or less than zero.
 * @n: The input number as an integer.
 *
 * Return: 1 if @n is greater than zero, 0 if @n is zero,
 *         -1 if @n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43); /* ASCII value for '+' */
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45); /* ASCII value for '-' */
		return (-1);
	}
	else
	{
		_putchar(48); /* ASCII value for '0' */
		return (0);
	}
}
