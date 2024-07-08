#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, sizeof(msg) - 1);
	return (1);
}
