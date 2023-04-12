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
	size_t end = sqrt(size);

	if (array == NULL)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	while (array[end] < value && start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	while (array[start] < value)
	{
		if (start >= size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start += 1;
		if (array[start] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		}

	}
}
