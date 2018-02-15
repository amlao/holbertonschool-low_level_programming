#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer array
 */
int *array_range(int min, int max)
{
	int *s;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		s[j] = i;
		j++;
	}

	return (s);
}
