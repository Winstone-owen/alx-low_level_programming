#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*_strlen - checks the length of a string
*@s: string to check
*
*Return: int length of the string
*/

int _strlen(char *s)
{
int length = 0;
while (s[length])
length++;
return (length);
}
