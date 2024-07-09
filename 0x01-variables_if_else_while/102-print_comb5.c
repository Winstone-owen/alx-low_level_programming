#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; ++i)
    {
        for (int j = i; j < 100; ++j)
        {
            // Print the first number
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');

            // Print the second number
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            // Print comma and space if not the last combination
            if (i != 99 || j != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
