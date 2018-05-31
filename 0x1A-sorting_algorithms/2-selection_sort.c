#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to an array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int i, j, min, holder;
	int sizeee;

	sizeee = size;
	if (!array || size <= 1)
		return;

	for (i = 0; i < sizeee; i++)
	{
		min = i;
		for (j = i + 1; j < sizeee; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			holder = array[i];
			array[i] = array[min];
			array[min] = holder;
			print_array(array, size);
		}
	}
}
