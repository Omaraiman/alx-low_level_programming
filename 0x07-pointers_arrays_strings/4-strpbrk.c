#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * Description: a  function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: substring
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		char *p = accept;

		for (; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
