#include "main.h"
/**
 * print_sign - determines if the input number
 * greater, equal or less than zero
 * @n: the input as an interger
 * Return: 1 is greater than zero or zero when zero
 * -1 is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
