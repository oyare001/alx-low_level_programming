#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size and initialize with c
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: If successful, a pointer to the array; otherwise, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	str[i] = c;

	return (str);
}

