#include "main.h"
/**
 * _pow_recursion - a function that returns the value of
 * x raised to power y
 * @x: interger
 * @y: interger
 * Return: X to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
