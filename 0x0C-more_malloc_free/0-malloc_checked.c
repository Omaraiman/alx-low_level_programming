#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: numper if bytes to allocate
 *
 * Return: 98
 **/

void *malloc_checked(unsigned int b)
{
	int *x;


	x = malloc(b);
	if (x == NULL)
	{
		return (98);
	}
}
