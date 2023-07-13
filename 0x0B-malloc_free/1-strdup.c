#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns apointer to a newly
 * allocated space in memory
 * @str: string
 *
 * Return: always (0)
 */
char *_strdup(char *str)
{
	char *n;
	int j, k;

	if (str == 0)
	{
		return (NULL);
	}
	j = 0;

	while (str[j] != '\0')
		j++;

	n = malloc(sizeof(char) * (j + 1));

	if (n == NULL)
		return (NULL);
	for (k = 0; str[k]; k++)
	{
		n[k] = str[k];
	}
	return (n);
}
