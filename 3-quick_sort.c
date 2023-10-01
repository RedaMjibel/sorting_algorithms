#include "sort.h"

/**
 * swap - swaps 2 elements in an array
 * @array: the array to be sorted
 * @size: size of the array
 * @a: adress of the first value to be swaped
 * @b: adress of the second value
 *
 * Return: nothing
 */

void swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

/**
 * Lomuto_partition - partitions the array
 * @array: the array to be sorted
 * @size: the size of the array
 * @first: the first index in the sort range
 * @last: the last index in the sort range
 *
 * Return: i
 */
size_t Lomuto_partition(int *array, size_t size, ssize_t  first, ssize_t last)
{
	int i = 0, j = 0;
	int pivot = array[last];

	for (i = j = first; j < last; j++)
	{
		if (array[j] < pivot)
		{
			swap(array, size, &array[j], &array[i]);
			i++;
		}
	}
	swap(array, size, &array[i], &array[last]);
	return (i);
}

/**
 * sorting - sorting using Lomuto partition scheme
 * @array: the array to be sorted
 * @size: the size of the array
 * @first: the first index in the sort range
 * @last: the last index in the sort range
 *
 * Return: nothing
 */
void sorting(int *array, size_t size, ssize_t first, ssize_t last)
{
	size_t pivot;

	if (first < last)
	{
		pivot = lomuto_partition(array, size, first, last);
		sorting(array, size, first, pivot -1);
		sorting(array, size, pivot + 1; last);
	}
}

/**
 * quick_sort -  sorts an array of integers in ascending orde
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;
	else
		sorting(array, size, 0, size - 1);
}
