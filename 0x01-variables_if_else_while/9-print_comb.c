#include <stdio.h>
/**
 * main - the entry point
 * Description: 'prints all possible combination of single-digit numbers'
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
