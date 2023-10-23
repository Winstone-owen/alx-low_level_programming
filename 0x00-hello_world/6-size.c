#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: This program prints the size of various data types
 * to the standard output. It is intended to run on both 32-bit
 * and 64-bit systems.
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
printf("Size of a double: %lu byte(s)\n", sizeof(double));

return (0);
}

