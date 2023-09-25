#include "sort.h"

/**
 * bubble_sort - sorts an array of ints using bubble sort
 * @array: array of int values
 * @size: size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i = 0, j = 0;

	if (array == NULL || size == 0)
		return;
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			print_array(array, size);
		}
		i++;
	}
}
