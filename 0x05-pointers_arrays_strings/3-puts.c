#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer
 * Return: void
*/
void _puts(char *str)
{
	int i = 0;
	char x;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
