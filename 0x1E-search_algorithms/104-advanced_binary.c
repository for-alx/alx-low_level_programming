#include "search_algos.h"
#include <stdio.h>
#include <math.h>

void print_array(int *array, size_t i, size_t R);
/**
* advanced_binary - Advanced binary search
* @array: list of element
* @size: size of array
* @value: target to search
* Return: target index otherwise (-1)
**/
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t index = 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		int mid = (left + right) / 2;

		print_array(array, left, right + 1);
		if (value == array[mid])
		{
			if (value == array[mid - index])
			{
				return (mid - index);
			}
			return (mid);
		}
		if (value > array[mid])
			left = mid + 1;
		if (value < array[mid])
			right = mid - 1;
	}
	return (-1);
}

/**
* print_array - print element of array
* @array: list of element
* @i: current left position
* @R: current right position
**/
void print_array(int *array, size_t i, size_t R)
{
	printf("Searching in array: ");
	while (i < R)
	{
		if (i + 1 == R)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
}
