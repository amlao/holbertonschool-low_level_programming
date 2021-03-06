#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: NULL if it fails, else pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	{
		char *str;
		unsigned int length1 = 0;
		unsigned int length2 = 0;
		unsigned int counter1 = 0;
		unsigned int counter2 = 0;
		unsigned int full;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		for (length1 = 0; s1[length1] != '\0'; length1++)
			;
		for (length2 = 0; s2[length2] != '\0'; length2++)
			;
		full = length1 + length2 + 1;
		if (n < length2)
			str = malloc(sizeof(char) * full);
		if (str == NULL)
		{
			return (NULL);
		}
		for (counter1 = 0; s1[counter1] < length1; counter1++)
			str[counter1] = s1[counter1];
		for (counter2 = 0; s2[counter2] < n; counter2++)
			str[counter2 + counter1] = s2[counter2];
		str[counter2 + counter1] = '\0';
		return (str);
	}
}
