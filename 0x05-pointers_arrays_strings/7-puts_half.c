#include "main.h"
/**
 * puts_half - a function that prints the second half of a string
 * @str: the string
 * Return: always (0)
 */
void puts_half(char *str)
{
	int i;
	int half;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	half = (length - 1) / 2;

	for (i = (half + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

