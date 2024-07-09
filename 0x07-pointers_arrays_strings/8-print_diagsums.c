#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 *
 * @a: Pointer to the start of the matrix.
 * @size: Width of the matrix column.
 *
 * Return: Void.
 */
void print_diagsums(int *a, int size)
{
	int principal = 0; /* Sum of principal diagonal */
	int secondary = 0; /* Sum of secondary diagonal */
	int i;

	for (i = 0; i < size; ++i)
	{
		principal += a[i * size + i]; /* Elements on the principal diagonal */
		secondary += a[i * size + (size - 1 - i)]; /* Elements on the secondary diagonal */
	}

	printf("Principal Diagonal: %d\n", principal);
	printf("Secondary Diagonal: %d\n", secondary);
}

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int size = 3;
	int *a = (int *)matrix;

	print_diagsums(a, size);
	return (0);
}
