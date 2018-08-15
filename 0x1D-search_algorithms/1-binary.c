#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: the array to print
 * @first: the first element of the array
 * @last: the last element of the array
 */
void print_array(const int *array, size_t first, size_t last)
{
	size_t counter;

	counter = first;
	for (; array && counter <= last; ++counter)
	{
		if (counter > first)
			printf(", ");
		printf("%d", array[counter]);
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

	if (!array)
		return (-1);

	end = size - 1;
	for (; start <= end;)
	{
		printf("Searching in array: ");
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
