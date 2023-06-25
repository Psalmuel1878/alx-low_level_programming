#include <stdio.h>

/**
 * main - Entry point to start program
 *
 * Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
