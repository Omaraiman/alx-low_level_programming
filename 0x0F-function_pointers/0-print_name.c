#include "function_pointers.h"
#include "_putchar.c"
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	if (name && f)
		f(name);
}
