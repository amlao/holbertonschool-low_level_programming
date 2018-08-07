#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located else if value is not
 * present in array or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = size/2;
	if (size < 1)
		return(-1);
	if (size == 1)
		return(array[0]);
	if (value == array[i])
		return(value);
	else
		binary_search(array + i, size - i, value);
}
