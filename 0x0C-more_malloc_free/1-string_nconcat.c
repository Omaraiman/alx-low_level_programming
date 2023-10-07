#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 *
 * @s1: array
 * @s2: array
 * @n: integer num
 *
 * Return:The returned pointer shall point to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2;
	unsigned int u;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	size1 = strlen(s1);
	size2 = strlen(s2);

	if (n >= size2)
	{
		n = size2;
	}

	char *new_str = malloc(len_s1 + n + 1);

	if (new_str == NULL)
	return (NULL);

	strcpy(new_str, s1);
	strncat(new_str, s2, n);

	return (new_str);
}
