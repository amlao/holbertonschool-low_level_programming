#include "holberton.h"
#include <stdlib.h>

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
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (length1 = 0; s1[length1] != '\0'; length1++)
	{
		length1++;
	}
	length1++;
	for (length2 = 0; s2[length2] != '\0'; length2++)
	{
		length2++;
	}
	length2++;
	full = length1 + length2 + 1;
	s = (char *)malloc(sizeof(char) * full);
	if (s == NULL)
	{
		return (NULL);
	}
	while (s1[count1] != '\0')
	{
		s[count1] = s1[count1];
		count1++;
	}
	while (s2[count2] != '\0')
	{
		s[count1 + count2] = s2[count2];
		count2++;
	}
}
