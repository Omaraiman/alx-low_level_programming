#include <stdio.h>
#include <stdlib.h>
/**
 * main -  entry point.
 *
 * Description: a function that multiplies two numbers.
 * @argc: variable store number of command line
 * @argv: array of character
 *
 * Return: 0 in success, 1 in Error..
 **/
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	int num1 = argv[1][0] - '0';
	int num2 = argv[2][0] - '0';


	int result = num1 * num2;


	printf("%d\n", result);

	return (0);
}
