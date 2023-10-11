#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: the integer array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
