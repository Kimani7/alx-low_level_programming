#include <stdio.h>
/**
 * main - a program that finds and prints the
 * largest prime factor
 * Return: always (0)
 */
int main(void)
{
	long int i, n, d;

	n = 612852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % 1 == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
			d = n / i;
			n = d;
		}
	}

	return (0);
}
