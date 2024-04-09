#include "sort.h"

/**
 * selection_sort- sorts an array of integers using selection sort
 *
 * @array: the array to sort
 * @size: size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (i != min_idx)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap- swaps 2 values
 *
 * @x: 1st value to be swapped
 * @y: 2nd value to be swapped
 *
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *y;
	*y = *x;
	*x = temp;
}
