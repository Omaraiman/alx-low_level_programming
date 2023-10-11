#include "function_pointers.h"
#include "_putchar.c"

/**
 * print_name - a function that prints a name.
 * @name: The name to be printed.
 * @f: A pointer to the function to be used to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		while (*name != '\0')
		{
			f(name);
			name++;
		}
	}
}
