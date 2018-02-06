#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: first occurence of c in the string or NULL
 */
char *_strchr(char *s, char c)
{
	int count;
	int length = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		length++;
	}
	for (count = 0; count <= length; count++)
	{
		if (s[count] == c)
			return (s + count);
	}
	return (0);
}
