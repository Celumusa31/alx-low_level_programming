#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - Entry point
 * @h: Character to be checked
 *
 * Return: Always int (Success)
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
