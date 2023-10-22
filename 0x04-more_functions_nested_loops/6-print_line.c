#include "main.h"

/**
* print_line - draws a straight line of length n in the terminal
* followed by a new line
*
* @n: the number of times the character _ should be printed
*
* Description: If n is 0 or less, the function should only print ''\n'
*
**/

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (int i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
