#include <stdio.h>
/**
 *main - this script ptint a-z in
 *small letters
 *Return: o
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
