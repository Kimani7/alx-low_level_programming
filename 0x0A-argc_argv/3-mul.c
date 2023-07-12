#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the result of the multiplacation
 * @argc: number of command line argc
 * @argv: array argc
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
