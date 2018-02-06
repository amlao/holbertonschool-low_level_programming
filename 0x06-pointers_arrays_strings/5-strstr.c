#include "holberton.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to scan
 * @needle: substring to scan
 * Return: a pointer to the beginning of needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0';j++)
		{
			if (!(needle[j] == haystack[i]))
			{
				break;
			}
			if (needle[j] != haystack[i]
			{
				
			}
		}
	}
	return (0);
}
