#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: generate lowercase letters
 * Return: 0
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		putchar(start);
		start++;
	}

	putchar('\n');
	return (0);
}
