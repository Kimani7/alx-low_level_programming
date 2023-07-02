#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times of the character
 * Return: always (0)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
