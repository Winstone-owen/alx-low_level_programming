#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: String to be scanned.
 * @accept: String containing characters to match.
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in @accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
