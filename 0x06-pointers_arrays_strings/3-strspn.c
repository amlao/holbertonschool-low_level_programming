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
	int slen = 0;
	int acceptlen = 0;
	int i;
	int j;

	while (s[slen] != '\0')
		slen++;
	while (accept[acceptlen] != '\0')
		acceptlen++;
	for (i = 0; i <= acceptlen; i++)
	{
		for (j = 0; j <= slen; j++)
		{
			if (accept[i] == s[j])
			{
				counter++;
				break;
			}
		}
	}
	return (counter);
}
