#include "search_algos.h"
#include <stdio.h>

void print_array(int *array, size_t i, size_t R);

/**
* binary_search - Binary search
* @array: list of element
* @size: size of array
* @value: target to search
* Return: target index otherwise (-1)
**/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = (left + right) / 2;

		print_array(array, left, right + 1);

		if (value == array[mid])
			return (mid);
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
			printf("%d ", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
}
