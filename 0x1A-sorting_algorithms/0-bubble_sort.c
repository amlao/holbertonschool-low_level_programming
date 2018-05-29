#include "sort.h"

/**
 * bubble_sort - print the array after each time you swap the two elements
 * @array: pointer to an array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int count;
	int counter = 0;
	int holder;
	size_t i = 0;

	if (!array || size == 0)
		return;

	while ( i < size)
	{
		for (count = size - 1; counter < count; counter++)
		{
			if (array[counter] > array[counter + 1])
			{
				holder = array[counter + 1];
				array[counter + 1] = array[counter];
				array[counter] = holder;
				print_array(array, size);
			}
		}
		counter = 0;
		i++;
	}
}
