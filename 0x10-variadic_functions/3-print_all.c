#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints all arguments passed to it
 * @format: The format to print the arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list count;
	char *str;
	int i = 0;

	va_start(count, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(count, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(count, int));
		else if (format[i] == 's')
		{
			str = va_arg(count, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		if (format[i + 1] && (format[i] == 'c'))
		{
			printf(", ");
		}
		if (format[i + 1] && (format[i] == 'i'))
		{
			printf(", ");
		}
		if (format[i + 1] && (format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(count);
	printf("\n");
}
