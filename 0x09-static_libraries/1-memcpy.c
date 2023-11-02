#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination memory where data will be copied
 * @src: Source memory from which data will be copied
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;

	for (; n > 0; r++, n--)
	{
	dest[r] = src[r];
	}

	return (dest);
}

