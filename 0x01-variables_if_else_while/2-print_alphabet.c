#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	// char x = 'a';

	// while (x <= 'z')
	// {
	// 	putchar(x);
	// 	x = (int) x  + 1;
	// 	x = (char) x;
	// }
	for(char x='z';x>='a';x--)
	{
		for(char z='a';z<='z';z++)
		putchar(z);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
