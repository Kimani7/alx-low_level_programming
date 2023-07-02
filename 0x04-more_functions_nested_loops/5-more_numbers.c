#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 * followed by a new line
 *
 * Return: always (0)
 */
void more_numbers(void)
{
	int k;
	int j;

	for (k = 0; k <= 9; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			}
		_putchar('\n');
	}
}
