#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to which src will be appended
 * @src: The source string to append to dest
 *
 * Return: A pointer to the concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
	a++;
	}

	b = 0;

	while (src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}

	dest[a] = '\0';

	return (dest);
}

