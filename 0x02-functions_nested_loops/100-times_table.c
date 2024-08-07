#include "main.h"

/**
 * print_times_table - Prints the times table up to n
 * @n: Integer for which the times table will be printed
 *
 * Description: Prints the times table from 0 to n
 *              with proper formatting.
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else
				{
					_putchar(',');
					_putchar(' ');

					if (product < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(product % 10 + '0');
					}
					else if (product >= 10 && product < 100)
					{
						_putchar(' ');
						_putchar((product / 10) % 10 + '0');
						_putchar(product % 10 + '0');
					}
					else if (product >= 100 && product < 1000)
					{
						_putchar(product / 100 + '0');
						_putchar((product / 10) % 10 + '0');
						_putchar(product % 10 + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
