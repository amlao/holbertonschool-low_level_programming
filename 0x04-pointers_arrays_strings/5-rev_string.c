#include "holberton.h"

/**
 * rev_string - reverses a string
 * @*s: string
 */
void rev_string(char *s)
{
	int i;
	int j;
	int a = s[i];

	for (i = 0; s[i] != '\0'; i++)
		j++;
	for (i = j - 1; i >= 0; i--)
		putchar(s[i]);
}
