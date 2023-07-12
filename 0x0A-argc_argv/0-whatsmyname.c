#include <stdio.h>
/**
 * main - a program that prints its name
 *
 * @argc: number of command line arguments
 * @argv: array of argc
 *
 * Return: (0) always
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
