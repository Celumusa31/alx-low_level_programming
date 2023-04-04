#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len- Entry point
 * @h: Character ti be checked
 *
 * Return: Always int (Success)
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
