#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head->next)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
	if (head)
	{
		free(head->str);
		free(head);
	}
}
