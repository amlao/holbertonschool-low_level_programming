#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if empty, else pointer
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int counter1 = 0;
	int counter2 = 0;
	int full;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2++] != '\0')
	       length2++;
	full = length1 + length2 + 1;
	str = (char *)malloc(sizeof(char) * full);
	if (str == NULL)
	{
		return (NULL);
	}
	for (counter1 = 0; s1[counter1] != '\0'; counter1++)
		str[counter1] = s1[counter1];
	for (counter2 = 0; s2[counter2] != '\0'; counter2++)
		str[counter2 + counter1] = s2[counter2];
	return (str);
}
