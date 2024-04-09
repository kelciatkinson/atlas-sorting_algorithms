#include "sort.h"

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