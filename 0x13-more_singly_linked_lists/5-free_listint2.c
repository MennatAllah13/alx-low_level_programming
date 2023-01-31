#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *node1, *node2;

	node1 = *head;
	while (node1->next)
	{
		node2 = node1;
		node1 = node1->next;
		free(node2);
	}
	*head = NULL;
}
