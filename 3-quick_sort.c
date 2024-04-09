#include "sort.h"

/**
 * partition- splits the array
 *
 * @array: the array to be sorted
 * @start: the starting index of the partition
 * @end: the ending index of the partition
 * @size: size of the array
 *
 * Return: pivot index
 */

int partition(int *array, int start, int end, size_t size)
{
	int pivot, i, j;

	pivot = array[end];
	i = start - 1;
	for (j = start; j <= end - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[end])
	{
		swap(&array[i + 1], &array[end]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * rec_quick_sort- uses recursion to quick sort
 *
 * @array: the array to be sorted
 * @start: starting index of the array
 * @end: the ending index of the array
 * @size: the seize of the array
 *
 */

void rec_quick_sort(int *array, int start, int end, size_t size)
{
	int pivot_index;

	if (start < end)
	{
		pivot_index = partition(array, start, end, size);

		rec_quick_sort(array, start, pivot_index - 1, size);
		rec_quick_sort(array, pivot_index + 1, end, size);
	}
}

/**
 * quick_sort- sorts an array of integers using quick sort
 *
 * @array: the array to be sorted
 * @size: the size of the array
 *
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	rec_quick_sort(array, 0, size - 1, size);
}

/**
 * swap- swaps 2 values
 *
 * @a: 1st value to be swapped
 * @b: 2nd value to be swapped
 *
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
