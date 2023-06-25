#include <stdio.h>

/**
 * main - program start
 *
 * combinations of single-digit numbers,
 *              separated by ", " and in ascending order.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
