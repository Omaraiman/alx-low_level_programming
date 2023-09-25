#include "main.h"
#include <stdio.h>

/**
 * _memset - the address of memory to print
 * @s: input value
 * @b: input value
 * @n: input value
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (*s);
}
