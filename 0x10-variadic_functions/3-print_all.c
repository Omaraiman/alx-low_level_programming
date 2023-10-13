#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints all arguments passed to it
 * @format: The format to print the arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list count;

	va_start(count, format);

	vprintf(format, args);

	va_end(args);
	printf("\n");
}
