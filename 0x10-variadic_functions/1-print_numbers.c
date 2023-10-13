#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int i = 0;
	char *x;

	va_start(count, n);
	if (separator != NULL)
	{
		printf("%s", separator);
	}

	for (; i < n; i++)
	{
		x = va_arg(count, int);
	}

	if (x ==	NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}

	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	va_end(count);
	printf("\n");
}
