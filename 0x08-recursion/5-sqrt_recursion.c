#include "main.h"

/**
 * _sqrt_recursion -  get the square root of a number.
 *
 * Description: a function that  returns the natural square root of a number.
 * @n: input number
 *
 * Return: square root value.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_recursive(n, 1));
}
