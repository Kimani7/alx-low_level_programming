#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements
 * of an array of intergers
 *
 * @a: pointer to array
 * @n: no of array
 *
 * Return: always (0)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
