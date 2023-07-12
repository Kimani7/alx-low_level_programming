#include <stdio.h>
/**
 * main - a program that prints all arg it receives
 *
 * @argc: number of command lines
 * @argv: array of argc
 *
 * Return: (0) always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
