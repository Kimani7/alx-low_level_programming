#include <stdio.h>
/**
 * main - the entry point
 * Decsription: print all single digits numbers of base 10
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
