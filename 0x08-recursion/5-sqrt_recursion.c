#include "main.h"
/**
* _sqrt_recursion - atural square root of a number
* @n: number
* Return: square root result
*/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
