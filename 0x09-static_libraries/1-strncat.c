#include "main.h"
/**
 * *_strncat - a function that concatenates two strings
 * @dest: the destination string
 * @src: the second string
 * @n: limit of n bytes
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}
