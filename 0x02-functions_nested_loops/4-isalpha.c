#include "holberton.h"

/**
 * print_sign - write a function that prints the sign of a number
 * @c: character to compare
 * Return: (1) if lowercase else (0)
 */
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
