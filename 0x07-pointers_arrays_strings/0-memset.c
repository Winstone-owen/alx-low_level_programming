
#include "main.h"

/**
 * _memset - Fills the first @n bytes of the memory area pointed to by @s
 *           with the constant byte @b.
 *
 * @n: Number of bytes of the memory area to be filled.
 * @s: Pointer to the memory area to be filled.
 * @b: Constant byte to fill the memory area.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
