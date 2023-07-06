#include "main.h"
/**
 * _puts_recursion - a program that prints a string
 * follwed by new line
 *
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
