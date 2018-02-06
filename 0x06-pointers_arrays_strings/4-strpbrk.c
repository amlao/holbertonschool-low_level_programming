#include "holberton.h"

/**
 * _strpbrk - searches for any of a set bytes
 * @s: string to scan
 * @accept: string to match
 * Return: pointer to byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s++;
				return (s);
			}
		}
		s++;
	}
	return (0);
}
