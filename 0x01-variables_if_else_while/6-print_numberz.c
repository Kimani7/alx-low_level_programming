#include <stdio.h>
/**
 * main - A program that all single digit numbers of base 10
 * Return: always (0)
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
	return (0);
}
