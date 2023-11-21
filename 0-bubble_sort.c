#include "sort.h"
/**
 *bubble_sort - Sorts elements by bubbling.
 *@array: The array to be sorted.
 *@size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int holder = 0;
	size_t  i, j = 0;

	if (array == NULL)
		return;

	for i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				holder = array[j + 1];
				array[j + 1] = array[j];
				array[j] = holder;
				print_array(array, size);
			}
		}
	}
}
