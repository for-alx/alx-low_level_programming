#include "main.h"
/**
* is_prime_number - atural square root of a number
* @n: number
* Return: result
*/
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
