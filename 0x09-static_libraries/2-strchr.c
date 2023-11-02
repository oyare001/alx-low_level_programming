#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string to search in
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	return (&s[i]);
	i++;
	}

	return (NULL);
}

