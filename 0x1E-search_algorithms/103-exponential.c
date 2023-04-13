#include "search_algos.h"
#include <stdio.h>
#include <math.h>

void print_array(int *array, size_t i, size_t R);
int l_binary_search(int *array, size_t size, int value, size_t start);

/**
* exponential_search - Exponential search
* @array: list of element
* @size: size of array
* @value: target to search
* Return: target index otherwise (-1)
**/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t min;
	size_t min_for_print;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	min = bound + 1 <= size ? bound : size;
	min_for_print = bound < size - 1 ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", bound /
		2, min_for_print);
	return (l_binary_search(array, min, value, bound / 2));
}

/**
* l_binary_search - Local binary search
* @array: list of element
* @size: size of array
* @value: target to search
* @start: list start point(index)
* Return: target index otherwise (-1)
**/
int l_binary_search(int *array, size_t size, int value, size_t start)
{
	int left = start;
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
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
}
