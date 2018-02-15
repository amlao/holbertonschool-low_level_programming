#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac:
 * @av:
 * Return:
 */
char *argstostr(int ac, char **av)
{
	int c1 = 0;
	int c2 = 0;
	int size = 0;
	int holder = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (c1 = 0; c1 < ac; c1++)
	{
		for (c2 = 0; av[c1][c2] != '\0'; c2++)
			size++;
	}
	size += (ac + 1);
	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (c1 = 0; c1 < ac; c1++)
	{
		for (c2 = 0; av[c1][c2] != '\0'; c2++)
		{
			s[holder++] = av[c1][c2];
		}
		s[holder++] = '\n';
	}
	s[holder] = '\0';
	return (s);
}
