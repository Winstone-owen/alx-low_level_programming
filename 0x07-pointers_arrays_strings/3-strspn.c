#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: String to check.
 * @accept: Substring of @s.
 *
 * Return: An unsigned integer representing the number of bytes
 *         in @s which consist only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
