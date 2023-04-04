#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Entry point
 * @h: Character to be checked
 *
 * Return: Always int (Success)
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
