#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp: function pointer
 * Return: index of the first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int j;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		j = cmp([array[i]]);
		i++;
		if (j != 0)
			return (i);
	}
}
