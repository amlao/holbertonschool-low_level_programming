#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to an array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int i, j, min, holder;
	size_t res;
	int sizeee;

	sizeee = size;
	res = 0;
	for (i = 0; i < sizeee; i++)
	{
		min = i;
		for (j = i; j < sizeee; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				res = 1;
			}
		}
		if (res == 1)
		{
			holder = array[i];
			array[i] = array[min];
			array[min] = holder;
			print_array(array, size);
		}
	}
}
