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
		s = (char *)malloc(size * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	for (counter = 0; counter < size; counter++)
	{
		s[counter] = c;
	}
	return (s);
}
