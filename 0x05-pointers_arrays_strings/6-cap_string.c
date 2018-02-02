#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
		case ',' :
		case ';' :
		case '.' :
		case '!' :
		case '?' :
		case '"' :
		case '(' :
		case ')' :
		case '{' :
		case '}' :
		case ' ' :
		case '\t' :
		case '\n' :
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		default:
			break;
		}
	}
	return (s);
}
