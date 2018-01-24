#include "holberton.h"

/**
 * _isalpha - checks if upper or lowercase
 * @c: character to check
 * Return: (1) if lowercase else (0)
 */
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
