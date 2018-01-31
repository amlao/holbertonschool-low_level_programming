#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	int j;
	int a;
	int b;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (b = 0; b < j / 2; b++)
	{
		a = s[b];
		s[b] = s[j - b - 1];
		s[j - b - 1] = a;
	}
}
