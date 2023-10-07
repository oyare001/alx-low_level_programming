#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0.
 */

int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'e' && letter != 'q')
            putchar(letter);
    }

    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        if (letter != 'E' && letter != 'Q')
            putchar(letter);
    }

    putchar('\n');

    return (0);
}
