#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Entry point
 * @head: Character to be checked
 * @index: Character to be checked
 *
 * Return: Always int (Success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{

		while (head != NULL)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}
	return (NULL);
}
