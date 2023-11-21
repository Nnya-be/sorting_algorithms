#include "sort.h"
/**
 *selection_sort - Function that sorts ints in ascending order by selection sort.
 *@array: The array to be sorted.
 *@size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i,j,low = 0;
	int holder = 0;
	
	if (array == NULL || size <= 1)
		return;
	for (i = 0; i < size; i++)
	{
		low = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[low])
			{
				low = j;
			}
		}
		if (low != i)
		{
			holder = array[i];
			array[i] = array[low];
			array[low] = holder;
			print_array(array, size);
		}
	}
}
