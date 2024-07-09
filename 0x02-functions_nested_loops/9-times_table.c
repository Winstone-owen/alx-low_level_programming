#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Return: No return value.
 */
void times_table(void)
{
	int a, b, op;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0'); // Print initial '0' for the first column
		for (b = 1; b <= 9; b++)
		{
			op = a * b;
			_putchar(',');
			_putchar(' ');

			// Print the result with correct formatting
			if (op < 10)
			{
				_putchar(' ');
				_putchar(op + '0');
			}
			else
			{
				_putchar((op / 10) + '0');
				_putchar((op % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
