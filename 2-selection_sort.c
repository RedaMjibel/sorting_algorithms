#include "sort.h"

/**
 * selectio_sort -  sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size -1; i++)
	{
		for(j = size - 1, k = i + 1; j > i; j--)
		{
			if (array[j] < array[k])
				k = j;
		}
		if (i > k)
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}