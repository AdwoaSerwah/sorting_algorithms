#include "sort.h"

/**
 * sort_partitions - Sorts partitions
 * @array: Array to sort
 * @start: Beginning of array
 * @end: End of array
 * @size: Array size
 */
void sort_partitions(int *array, int start, int end, size_t size)
{
	int j = start, i = start - 1, pivot = array[end], tmp;

	if (end <= start)
		return;
	while (j < end)
	{
		if (array[j] <= pivot)
		{
			int tmp = array[j];

			i++;
			array[j] = array[i];
			array[i] = tmp;
			if (i != j)
				print_array(array, size);
		}
		j++;
	}
	i++;
	tmp = array[end];
	array[end] = array[i];
	array[i] = tmp;
	if (i != j)
		print_array(array, size);
	sort_partitions(array, start, i - 1, size);
	sort_partitions(array, i + 1, end, size);
}

/**
 * quick_sort - sorts an array in ascending order with quick sort
 * @array: Array to sort
 * @size: Array size
 */
void quick_sort(int *array, size_t size)
{
	if (size <= 1)
		return;
	sort_partitions(array, 0, (int) (size - 1), size);
}
