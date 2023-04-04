#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Entry point
 * @head: Character to be checked
 *
 * Return: Always void (Success)
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
