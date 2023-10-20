#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the start of the list
 * @str: string to duplicate into the new node
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *my_new_node;
	list_t *last = *head;
	int the_len = 0;

	while (str[the_len])
		the_len++;

	my_new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	my_new_node->str = strdup(str);
	my_new_node->the_len = the_len;
	my_new_node->next = NULL;

	if (*head == NULL)
	{
		*head = my_new_node;
		return (my_new_node);
	}

	while (last->next)
		last = last->next;

	last->next = my_new_node;

	return (my_new_node);
}
