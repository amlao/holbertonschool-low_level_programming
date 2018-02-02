 #include "holberton.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array of integers
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int counter;
	int rev;

	for (counter = 0; counter < n / 2; counter++)
	{
		rev = a[counter];
		a[counter] = a[counter - 1];
		a[counter - 1] = rev;
	}
}
