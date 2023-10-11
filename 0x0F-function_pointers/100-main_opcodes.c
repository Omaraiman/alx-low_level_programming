#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_error_and_exit - Prints an error message and exits the program
 * @status: The exit status
 */
void print_error_and_exit(int status)
{
    printf("Error\n");
    exit(status);
}

/**
 * print_opcodes - Prints the opcodes of a function
 * @start: A pointer to the start of the function
 * @size: The number of bytes to print
 */
void print_opcodes(char *start, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%02hhx", start[i]);
        if (i < size - 1)
            printf(" ");
    }
    printf("\n");
}

/**
 * main - Prints the opcodes of its own main function
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful, other error code if not
 */
int main(int argc, char **argv)
{
    int size;

    if (argc != 2)
        print_error_and_exit(1);

    size = atoi(argv[1]);

    if (size < 0)
        print_error_and_exit(2);

    print_opcodes((char *)main, size);

    return (0);
}
