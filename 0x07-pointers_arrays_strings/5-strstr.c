#include "main.h"
#include <stdio.h>

/**
 * *_strstr -  locates a substring.
 * Description: a function that locates a substring.
 * @haystack: input char
 * @needle: input char
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
		{
			return (start);
		}
	}


	return (NULL);
}
