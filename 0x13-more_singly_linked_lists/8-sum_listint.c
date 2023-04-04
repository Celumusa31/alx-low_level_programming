#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Entry point
 * @head: Character to be checked
 *
 * Return: Always int (Success)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
