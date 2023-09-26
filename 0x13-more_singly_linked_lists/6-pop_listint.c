#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *node, *list;

	if (!*head)
		return (0);

	list = *head;
	num = list->n;
	node = list->next;
	free(list);
	*head = node;
	return (num);
}
