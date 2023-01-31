#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head->next)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}

}
