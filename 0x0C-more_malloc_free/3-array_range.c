#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - a function that creates an array of intergers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
