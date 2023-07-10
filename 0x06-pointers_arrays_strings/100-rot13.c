#include "main.h"
/**
 * rot13 - a function that encodes a string
 *
 * @str: string to encode
 *
 * Return: string out
 */
char *rot13(char *str)
{
	int i;
	int j;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
				break;
			}
		}
	}

	return (str);
}
