#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - a function that adds a node at the beginning of a list
 * @head: pointer to first node in the list
 * @n: int to insert in new node
 * Return: adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
