#include "sort.h"

/**
 * bubble_sort - Sorts an array with Bubble sort algorithm
 * @array: Array to sort
 * @size: Array size
 */
void bubble_sort(int *array, size_t size)
{
	if (size == 0 || size == 1)
		return;
	while (1)
	{
		size_t isSwapped = 0;
		size_t i = 0;

		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				int tmp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = tmp;
				isSwapped++;
				print_array(array, size);
			}
			i++;
		}
		if (isSwapped == 0)
			break;
	}
}
