#include <stdio.h>

/**
* main - Prints the largest prime factor of 612852475143.
*
* Return: Always 0.
*/
int main(void)
{
long int n, fp;

n = 612852475143;

for (fp = 2; fp <= n; fp++)
{
if (n % fp == 0)
{
n /= fp;
fp--;
}
}

printf("%ld\n", fp);

return (0);
}
