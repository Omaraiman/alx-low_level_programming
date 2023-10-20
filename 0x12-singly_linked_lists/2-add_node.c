#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the start
 * @str: string to duplicate into the new node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *my_new_node;
	int the_len = 0;

	while (str[the_len])
		the_len++;

	my_new_node = malloc(sizeof(list_t));
	if (!my_new_node)
		return (NULL);

	my_new_node->str = strdup(str);
	my_new_node->the_len = the_len;
	my_new_node->next = (*head);

	(*head) = my_new_node;

	return (my_new_node);
}
