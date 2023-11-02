#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence in a string of
 * any character from another string.
 * @s: The string to search in.
 * @accept: The string containing characters to match.
 *
 * Return: A pointer to the first occurrence in s of any character from accept,
 * or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
	s++;
	}

	return (NULL);
}

