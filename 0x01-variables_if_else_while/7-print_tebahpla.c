#include <stdio.h>
/**
 * main - the entry point
 * Description: 'prints the lowercase alphabet in reverse'
 * Return: always 0
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
