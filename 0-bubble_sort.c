#include "sort.h"

/**
 * bubble_sort - Sorts an array with Bubble sort algorithm
 * @array: Array to sort
 * @size: Array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;

	if (size == 0 || size == 1)
		return;
	while (i < size - 1)
	{
		size_t j = 0;
		size_t isSwapped = 0;

		while (j < size - 1 - i)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = tmp;
				isSwapped++;
				print_array(array, size);
			}
			j++;
		}
		if (isSwapped == 0)
			break;
		i++;
	}
}
