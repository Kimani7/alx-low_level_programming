#include "main.h"
/**
 * _strlen - returns the lengeth of a string
 * @s: the parameter string
 * Return: always (0)
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
