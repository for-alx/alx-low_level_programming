#include "main.h"
/**
* _print_rev_recursion - reverse string
* @s: string pointer
* Return: none
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
