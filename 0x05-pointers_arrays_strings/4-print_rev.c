#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: always (0)
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	for (a--; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
