#include "main.h"
/**
 * print_alphabet_x10 - print a-z in lowercase for 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char start;
	int i = 0;

	while (i < 10)
	{
		start = 'a';

		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		i++;
	}
}
