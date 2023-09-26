#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strspn -  gets the length of a prefix substring
 * Description: a function that gets the length of a prefix substring.
 * @s: input string
 * @accept: substring
 * Return:  the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int a;
	unsigned int count;

	count = 0;
	for (a = 0; s[a] != '\0' && s[a] != ' '; a++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[a])
			{
				count++;
			}
		}
	}
	return (count);
}
