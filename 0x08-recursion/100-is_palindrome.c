#include "main.h"
/**
 * _strlen_recursion - acquire length of a string
 *
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * compare_string - compare each character of a string
 * @s: string
 * @left: smallest iterator
 * @right: largest iterator
 * Return: always (0)
 */
int compare_string(char *s, int left, int right)
{
	if (*s + left == (*s + right))
	{
		if (left == right || left == right + 1)
		{
			return (1);
		}
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: pointer to string
 *
 * Return: (1)  if palindrome, else (0)
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compare_string(s, 0, _strlen_recursion(s - 1)));
}
