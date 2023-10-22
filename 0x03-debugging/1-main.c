#include <stdio.h>

int main(void)
{
int i, j, k;
i = 0;
j = 1000;

while (i < j)
{
k = j / 98;
i = i + k;
printf("%d\n", i);
// Commented out the following line to avoid infinite loop
// j = j - 1;
}

return (0);
}
