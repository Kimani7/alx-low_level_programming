#include <stdio.h>
/**
 * main - the entry point
 * Description: 'print all the letters except q and e
 * Return: always 0
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 101 || a == 113)
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
