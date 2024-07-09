#include "main.h"

/**
 * print_chessboard - Prints a 2D array representing a chessboard.
 *
 * @a: The 2D array (8x8) to be printed.
 *
 * Return: No return value.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
