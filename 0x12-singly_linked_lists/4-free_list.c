#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be free
 */
void free_list(list_t *head)
{
	list_t *my_temp;

	for (; head != NULL; head = my_temp)
	{
		my_temp = head->next;
		free(head->str);
		free(head);
	}
}
