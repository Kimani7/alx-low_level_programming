#include "main.h"
/**
 * print_most_numbers - prints numebrs from 0 to 9
 * does not print 2 and 4
 * Return: always (0)
 */
void print_most_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		if (k != 2 && k != 4)
		{
			_putchar(k + '0');
		}
	}
	_putchar('\n');
}
