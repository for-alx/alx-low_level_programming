#include "search_algos.h"
#include <stdio.h>
#include <math.h>


/**
* jump_search - Jump search
* @array: list of element
* @size: size of array
* @value: target to search
* Return: target index otherwise (-1)
**/
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = 0;
	size_t jump = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	while (array[end] < value && end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		end += jump;
	}
	start = end - jump;
	printf("Value found between indexes [%lu] and [%d]\n", start, end);
	if (end > size)
		end = size - 1;
	else
		end = end;
	while (start <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start += 1;
	}
	return (-1);
}
