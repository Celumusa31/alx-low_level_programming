#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Entry point
 * @head: Character to be checked
 *
 * Return: Always int (Success)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int result;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	result = tmp->n;

	(*head) = (*head)->next;

	free(tmp);
	return (result);
}
