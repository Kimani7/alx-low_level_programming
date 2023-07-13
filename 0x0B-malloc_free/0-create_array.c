#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - aprogram that creates arrays of char
 * @size: size of array
 * @c: character
 *
 * Return: (0) always
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
