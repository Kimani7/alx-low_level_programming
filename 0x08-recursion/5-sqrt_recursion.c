#include "main.h"
/**
 * sqrt_a - return the natural square root
 * of a number
 * @a: input number
 * @b: iterator
 * Return: sqrt or (-1)
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, (b + 1)));
}
/**
 * _sqrt_recursion - a function that prints the natural
 * square root of a number
 * @n: number to find sqrt
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
