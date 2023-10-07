#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
    char lowercase, uppercase;

    for (lowercase = 'a', uppercase = 'A'; lowercase <= 'z'; lowercase++, uppercase++)
    {
        putchar(lowercase);
        putchar(uppercase);
    }

    putchar('\n');

    return (0);
}
