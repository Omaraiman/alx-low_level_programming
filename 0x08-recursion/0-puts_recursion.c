#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line using recursion
 *
 * @s: pointer to the string to be printed
 *
 * Description: This function recursively prints each character of the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
