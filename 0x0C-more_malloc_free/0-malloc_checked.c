#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * create_array - create an array of characters
 *
 * Description: A function that creates an array of chars,
 *  and initializes it with a specific char.
 *
 * @size: size of the memory to print
 * @c: input parameter
 *
 * Return: a pointer to the array, or NULL if it fails
 **/

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == 0)
	{
		return (98);
	}
}
