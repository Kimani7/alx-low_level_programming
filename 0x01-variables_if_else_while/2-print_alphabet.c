#include <stdio.h>
/**
 * main - the entry point
 * Description: 'Print alphabets in lower case'
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
