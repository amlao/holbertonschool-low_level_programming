#include "sort.h"

/**
 * swap - swaps two elements
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
				swap(array, pivot, i);
				print_array(array, size);
				pivot += 1;
			}
		}
	}

	if (pivot != max)
	{
		swap(array, pivot, max);
		print_array(array, size);
	}
	return (pivot);
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
	int pivot;

	pivot = partition(array, min, max, size);

	if (pivot - 1 > min && pivot < max)
		sortof(array, min, pivot - 1, size);
	if (pivot + 1 < max)
		sortof(array, pivot + 1, max, size);
}

/**
  * quick_sort - sorts an array of integers in ascending order
  * @array: pointer to an array
  * @size: size of the array
  */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	sortof(array, 0, size - 1, size);
}
