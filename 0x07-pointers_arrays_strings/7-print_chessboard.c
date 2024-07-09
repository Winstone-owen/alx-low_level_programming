#include <stdio.h>

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

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char chessboard[8][8] = {
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
	};

	print_chessboard(chessboard);
	return (0);
}
