#include <stdio.h>
/**
 * main - the entry point
 * Description: prints all numbers of base 16 in lower case
 * Return: always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
