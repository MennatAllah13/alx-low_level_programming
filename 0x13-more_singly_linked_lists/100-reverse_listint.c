#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
