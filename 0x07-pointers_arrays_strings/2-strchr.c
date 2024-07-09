#include <string.h>

/**
 * _strchr - Locates a character in a string.
 *
 * @s: The string to search from.
 * @c: The character to search for.
 *
 * Return: A pointer to the first occurrence of @c in @s,
 *         or NULL if @c is not found.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
