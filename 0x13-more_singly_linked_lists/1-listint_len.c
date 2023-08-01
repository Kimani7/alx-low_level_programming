#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * in a linked lists
 * @h: list to transverse
 * Return: number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
