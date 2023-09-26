#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -   prints the chessboard.
 *
 * Description: a function that prints the chessboard.
 * @a: input char
 *
 * Return: null
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
