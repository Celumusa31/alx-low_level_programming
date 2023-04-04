#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Entry point
 * @head: Character to be checked
 * @n: Character to be checked
 *
 * Return: Always int (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode != NULL)
		{
			newNode->n = n;
			newNode->next = *head;
			*head = newNode;
		}
		else
		{
			return (NULL);
		}
	}
	return (newNode);
}
