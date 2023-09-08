#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		putchar('\n');
		x = (int) x  + 1;
		x = (char) x;
	};
	return (0);
}
