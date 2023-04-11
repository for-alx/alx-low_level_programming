#include "search_algos.h"
#include <stdio.h>

/**
* linear_search - Linear search
* @array: list of element
* @size: size of array
* @value: target to search
* Return: target index otherwise (-1)
**/
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	for (; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
