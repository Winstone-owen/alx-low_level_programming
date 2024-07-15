#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2. It can contain a '*' as a special character.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1); // Both strings have ended simultaneously

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1)); // Characters match, move to next

if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1); // '*' is at the end of s2, matches any remaining characters
if (*s1 == '\0')
return (wildcmp(s1, s2 + 1)); // s1 is empty, skip the '*'
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)); // Try to match '*' with characters in s1
}

return (0); // Characters do not match and s2 does not contain '*'
}
