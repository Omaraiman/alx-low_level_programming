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
	float num;
	char c;

	va_start(count, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(count, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(count, int));
				break;
			case 'f':
				num = va_arg(count, double);
				printf("%f", num);
				break;
			case 's':
				str = va_arg(count, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(count);
	printf("\n");
}
