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
	listint_t *tmp, *tmp2;
	tmp = *head;

	while (tmp)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}

	*head = NULL;
	free(head);
}
