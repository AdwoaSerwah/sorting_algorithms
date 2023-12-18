#include "sort.h"

/**
 * selection_sort - Sorts array in ascending order with selection sort
 * @array: Array to sort
 * @size: Array size
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;

	if (size <= 1)
		return;
	while (i < size - 1)
	{
		int min = array[i];
		size_t j = i, min_index = i;

		while (j < size)
		{
			if (array[j] < min)
			{
				min = array[j];
				min_index = j;
			}
			j++;
		}
		if (min_index != i)
		{
			int tmp = array[i];

			array[i] = min;
			array[min_index] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
