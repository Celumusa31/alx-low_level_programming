#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Entry point
 * @head: Character to be checked
 *
 * Return: Always void (Success)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = (*head);
			*head = (*head)->next;
			free(tmp);
		}
	}
	else
	{
		return;
	}
	free(*head);

	head = 0;
}
