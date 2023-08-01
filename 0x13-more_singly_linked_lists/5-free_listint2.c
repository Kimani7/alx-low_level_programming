#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees listint
 * Description: the function sets the head to null
 * @head: pointer to list to be freed
 * Return: (0)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
