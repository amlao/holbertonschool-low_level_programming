#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located else if value is not
 * present in array or if array is NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);
	for (; i < (int)size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
