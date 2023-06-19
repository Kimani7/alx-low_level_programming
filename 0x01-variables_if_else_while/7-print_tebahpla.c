#include <stdio.h>
/**
 * main - A program that prints a sript backwards
 * Return: always (0)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
