#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *lowercase, excluding the letters 'q' and 'e',
 *              followed by a new line.
 *
 * Return:  0 ok
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
