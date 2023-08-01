#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes a head node of a list
 * @head: pointer to the list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int k;

	if (!head || !*head)
	{
		return (0);
	}

	k = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (k);
}
