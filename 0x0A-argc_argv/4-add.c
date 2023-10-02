#include <stdio.h>
#include <stdlib.h>

/**
 * main -  entry point.
 *
 * Description: a function that adds positive numbers.
 * @argc: variable store number of command line
 * @argv: array of character
 *
 * Return: 0 in success, 1 in Error.
 **/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int sum = 0;
	int i = 1

	for (; i < argc; i++)
	{
		char *end_of_ptr;
		long num;

		num = strtol(argv[i], &end_of_ptr, 10);

		if (*end_of_ptr != '\0' || num < 0 || num > INT_MAX)
		{
			printf("Error\n");
			return (1);
		}

		sum += (int)num;
	}

	printf("%d\n", sum);

	return (0);
}
