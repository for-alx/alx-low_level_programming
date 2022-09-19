#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print
 * Return: none
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}
