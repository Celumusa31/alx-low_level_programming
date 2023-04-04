#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Entry point
 * @head: Character to be checked
 * @n: Character to be checked
 *
 * Return: Always int (Success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode != NULL)
		{
			newNode->n = n;
			newNode->next = NULL;

			if (*head == NULL)
			{
				*head = newNode;
			}
			else
			{
				listint_t *lastNode = *head;

				while (lastNode->next != NULL)
				{
					lastNode = lastNode->next;
				}
				lastNode->next = newNode;
			}
		}
		else
		{
			return (NULL);
		}
	}
	return (newNode);
}

