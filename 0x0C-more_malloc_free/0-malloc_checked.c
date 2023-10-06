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
	if (size == 0)
	{
		return (NULL);
	}
	char *array;

	*array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	unsigned int i = 0

	for (; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
