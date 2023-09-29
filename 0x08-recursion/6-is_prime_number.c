#include "main.h"

/**
 * is_prime_number -  get the square root of a number.
 *
 * Description: a function that returns 1 if input integer is a prime
 * @n: input number
 *
 * Return: 1 if a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_num_helper(n, n - 1));
}

/**
 * is_prime_num_helper - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_num_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_num_helper(n, i - 1));
}
