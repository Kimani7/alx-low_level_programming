#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL is fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int j;
	int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = 0;
	while (s1[j] != '\0')
	{
		j++;
	}

	k = 0;
	while (s2[k] != '\0')
	{
		k++;
	}

	str = malloc(sizeof(char) * (j + k + 1));

	if (str == NULL)
		return (NULL);
	j = k = 0;
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}

	while (s2[k] != '\0')
	{
		str[j] = s2[k];
		k++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
