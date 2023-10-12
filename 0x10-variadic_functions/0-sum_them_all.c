#include "variadic_functions.h"


/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return (0);

	va_list countr;
	int i, sum = 0;

	va_start(countr, n);

	for (i = 0; i < n ; i++)
	{
		sum += va_arg(n, countr);
	}
	va_end(countr);

	return (sum);

}
