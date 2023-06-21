#include "main.h"
/**
 * main - a programs that prints the alphabet using _putchar
 * Return: a;ways (0)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
