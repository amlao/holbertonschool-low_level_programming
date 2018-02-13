#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: char to initialize
 * Return: NULL if size = 0, else pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int counter = 0;
	char *s;

	if (size > 0)
	{
		s = malloc(size * sizeof(char));
		if (s == '\0')
		{
			return ('\0');
		}
	}
	if (s)
	{
		for (counter = 0; counter < size; counter++)
		{
			s[counter] = c;
		}
		return (s);
	}
	else
	{
		return ('\0');
	}
	return (s);
}
