#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: the array to print
 * @size: the size of array
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array:");
	for (; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

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
	size_t start = 0;
	size_t mid, end;

	end = size - 1;
	mid = (start + end) / 2;
	if (array != NULL && size > 0)
	{
		print_array(array + start, end - start + 1);
		for (; start < end;)
		{
			if (array[mid] < value)
				start = mid + 1;
			else if (array[mid] > value)
				end = mid;
			else
				return (mid);
			print_array(array + start, end - start + 1);
		}
	}
	return (-1);
}
