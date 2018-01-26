#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < size - x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
