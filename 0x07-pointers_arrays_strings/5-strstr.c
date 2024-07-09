#include <string.h>

/**
 * _strstr - Finds the first occurrence of a substring.
 *
 * @haystack: The string to be scanned.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of @needle in @haystack,
 *         or NULL if @needle is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
