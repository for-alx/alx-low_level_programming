#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - Binary search
* @array: list of element
* @size: size of array
* @value: target to search
* Return: target index otherwise (-1)
**/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	while ((array[high]) != array[low] && (value >= array[low]) && (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
		if (array[mid] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
			low = mid + 1;
		}
		else if (value < array[mid])
			high = mid -1;
		else
		{
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
			return mid;
		}
	}
	printf("Value checked array[%d] is out of range\n", 2109);
	if (value == array[low])
	{
		return low;
	}
	else
		return -1;
}

