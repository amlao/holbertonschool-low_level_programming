#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: string
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (counter);
}
