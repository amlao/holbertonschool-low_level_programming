#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
	int length = 0;
	int counter = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	length++;
	s = (char *)malloc(length * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < length; counter++)
	{
		s[counter] = str[counter];
	}
	s[counter] = '\0';
	return (s);
}
