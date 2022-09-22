#include "main.h"
/**
 * infinite_add - add 2 integers.
 * @n1: integer
 * @n2: integer
 * @r: buffer
 * r_index: size of r
 * Return: char
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens; 
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--;  r_index--)
	{
		num = (*n2 - '0') + tens; 
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10; 
	}
	
}
