#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: The initial segment of the string.
 * @accept: The bytes to be accepted in the segment.
 *
 * Return: The number of bytes in the initial segment of @s which consist
 *         only of bytes from @accept.
 */
unsigned int _strspn(const char *s, const char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}
