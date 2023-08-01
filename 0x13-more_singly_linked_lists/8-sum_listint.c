#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - a function that returns sum of all data in a list
 * @head: pointer to the list
 *
 * Return: (0) if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum +=temp->n;
		temp = temp->next;
	}

	return (sum);
}
