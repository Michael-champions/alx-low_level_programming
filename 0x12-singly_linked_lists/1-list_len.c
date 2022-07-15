#include <stdlib.h>
#include "lists.h"

/**
  * list_len - return number of elements in a linked list.
  * @h: pointer to structure.
  * Return: number of elements in list_t list
  */

size_t list_len(const list_t *h)
{
	size_t numele;

	numele = 0;

	while (h != NULL)
	{
		numele++;
		h = h->next;
	}
	return (numele);
}
