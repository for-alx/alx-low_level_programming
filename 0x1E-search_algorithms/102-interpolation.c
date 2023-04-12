#include "search_algos.h"
#include <stdio.h>

/**
* interpolation_search - Interpolation search
* @array: list of element
* @size: size of array
* @value: target to search
* Return: target index otherwise (-1)
**/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = 0;

	while ((value >= array[low]))
	{
		mid = low + (((double)(high - low) / (array[high]
			- array[low])) * (value - array[low]));

		if (mid > size)
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}

		if (array[mid] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
			low = mid + 1;
		}
		else if (value < array[mid])
			high = mid - 1;
		else
		{
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
			return ((int)mid);
		}
	}
	if (value == array[low])
	{
		return ((int)low);
	}
	else
		return (-1);
}
