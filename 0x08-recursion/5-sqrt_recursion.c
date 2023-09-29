#include "main.h"
#include <math.h>

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
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @val: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int val)
{
		if (val * val == n)
		return (val);
	if (val * val > n)
		return (-1);
	return (actual_sqrt_recursion(n, val + 1));
}
