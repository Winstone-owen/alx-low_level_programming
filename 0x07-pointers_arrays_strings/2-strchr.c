#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of @c in the string @s.
 *
 * @s: The string to be scanned.
 * @c: The character to be searched in @s.
 *
 * Return: A pointer to the first occurrence of @c in @s, or NULL if @c
 *         is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
