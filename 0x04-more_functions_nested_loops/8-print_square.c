#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: shows the size of square
 * if size is 0 print new line
 * Return: (0) always
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
