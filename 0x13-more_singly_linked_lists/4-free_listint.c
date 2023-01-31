#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of the linked list.
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
