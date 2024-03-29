#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
