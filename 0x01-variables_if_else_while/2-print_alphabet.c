#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: generate lower and UPPERCASE letters
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	char d = 'A';
    while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
