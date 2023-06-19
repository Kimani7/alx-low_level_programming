#include <stdio.h>
/**
 * main - A program that prints the alphabet in upper and lower case
 * Return: always (0)
 */

int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
