#include "sort.h"

/**
 * swap - swaps two elements
 * @array: pointer to an array
 * @i: first value
 * @j: second value
 */
void swap(int *array, int i, int j)
{
	int holder;

	holder = array[i];
	array[i] = array[j];
	array[j] = holder;
}

/**
 * partition - partitions the array
 * @array: pointer to an array
 * @min: bottom of array
 * @max: top of array
 * @size: size of array
 * Return: the pivot
 */
int partition(int *array, int min, int max, size_t size)
{
	int i, pivot;

	pivot = array[max];
	for (i = min; i < max; i++)
	{
		if (array[i] <= pivot)
		{
			if (min != i)
			{
				swap(array, min, i);
				print_array(array, size);
			}
			min++;
		}
	}

	if (min != max)
	{
		swap(array, min, max);
		print_array(array, size);
	}
	return (min);
}

/**
 * sortof - recursivesly sorts an array
 * @array: pointer to an array
 * @min: bottom of an array
 * @max: top of an array
 * @size: size of the array
 */
void sortof(int *array, int min, int max, size_t size)
{
	int pivot = 0;

	if (min < max)
	{
		pivot = partition(array, min, max, size);
		sortof(array, min, pivot - 1, size);
		sortof(array, pivot + 1, max, size);
	}
}

/**
  * quick_sort - sorts an array of integers in ascending order
  * @array: pointer to an array
  * @size: size of the array
  */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	sortof(array, 0, size - 1, size);
}
