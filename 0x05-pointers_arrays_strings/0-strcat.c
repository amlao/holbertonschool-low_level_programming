#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int count;
	int length1 = 0;
	int length2 = 0;

	for (count = 0; src[count] != '\0'; count++)
		length1++;
	for (count = 0; dest[count] != '\0'; count++)
		length2++;
	for (count = 0; count < length1; count++)
		dest[length2 + count] = src[count];
	dest[length2 + count] = '\0';
	return (dest);
}
