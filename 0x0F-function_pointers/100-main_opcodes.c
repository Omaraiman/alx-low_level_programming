#include "function_pointers.h"
/**
 * print_error_and_exit - Prints an error message and exits the program.
 * @status: The exit status.
 */
void print_error_and_exit(int status)
{
	char *error = "Error\n";

	while (*error)
		_putchar(*error++);
	exit(status);
}
/**
 * print_opcodes - Prints the opcodes of this function.
 * @start: The start of the memory area to print.
 * @size: The number of bytes to print.
 */
void print_opcodes(char *start, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar("0123456789abcdef"[(start[i] >> 4) & 0xF]);
		_putchar("0123456789abcdef"[start[i] & 0xF]);
		if (i < size - 1)
			_putchar(' ');
	}
	_putchar('\n');
}
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful, other error code if not
 */
int main(int argc, char **argv)
{
	if (argc != 2)
		print_error_and_exit(1);

	int size = atoi(argv[1]);

	if (size < 0)
		print_error_and_exit(2);

	print_opcodes((char *)main, size);

	return (0);
}
