#include <stdio.h>

#define FILE_NAME printf("print file name: %s\n", __FILE__)

/**
 * main -  program that prints the name of the file it was compiled from
 *
 * Return: 0
*/

int main(void)
{
	FILE_NAME;
	return (0);
}
