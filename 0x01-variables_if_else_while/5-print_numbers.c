#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print number start from 0-9.
 * Return: 0
 */
int main(void)
{
	char start = '0';

	while (start <= '9')
	{
		putchar(start);
		start++;
	}

	putchar('\n');
	return (0);
}
