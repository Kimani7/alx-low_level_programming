#include "main.h"
/**
 * swap_int - a function that swaps the value of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: always (0)
 */
void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}
