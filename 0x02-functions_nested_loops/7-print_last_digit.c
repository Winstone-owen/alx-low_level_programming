#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The input number as an integer.
 *
 * Return: The last digit of @n.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
