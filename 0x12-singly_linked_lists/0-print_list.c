#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->string == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->string);
		h = h->next;
		node++;
	}
	return (node);
}
