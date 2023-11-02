#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Destination string to which src will be appended
 * @src: Source string to append to dest
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: A pointer to the concatenated string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
	a++;
	}

	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}

	dest[a] = '\0';

	return (dest);
}

