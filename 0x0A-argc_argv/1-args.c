#include <stdio.h>
/**
 * main - a function that prints number of arguments passed into it
 *
 * @argc: number of arguments
 * @argv: array of argv
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
