#include "lists.h"

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	listp_t *hptr = NULL, *new, *add;

	while (head)
	{
		new = malloc(sizeof(listp_t));
		if (!new)
			exit(98);
		new->p = (void *)head;
		new->next = hptr;
		hptr = new;
		add = hptr;
		while (add->next)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (num);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}
	free_listp(&hptr);
	return (num);
}

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp, *curr;

	if (head)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
