#include <stdlib.h>
#include "lists.h"


/**
 * reverse_listint - return sum of list data
 * @head: head node
 *describtion:a function that reverses a listint_t linked list.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !*head)
		return (*head);

	prev = 0;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
