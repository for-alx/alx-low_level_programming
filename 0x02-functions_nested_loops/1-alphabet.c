#include "main.h"
/**
 * main - Entry point
 * Description: display a-z in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
