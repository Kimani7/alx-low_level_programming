#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints elements of a list
 *
 * @h: pointer to node
 * Return: (0) nil, number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			k++;
		}
	}
	return (k);
}
