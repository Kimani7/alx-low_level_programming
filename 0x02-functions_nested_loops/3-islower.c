#include "main.h"
/**
 * _islower - check whether character is lowercase
 * 'c' - character
 * Return: (1) if lowercase else (0) uppercase
 */

int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}