#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head->next)
	{
		node = *head;
		*head = *head->next;
		free(node->str);
		free(node);
	}
	*head = NULL;
}
