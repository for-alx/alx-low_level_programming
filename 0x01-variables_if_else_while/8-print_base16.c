#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 16 in lowercase
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		putchar(start + 48);
		start++;
	}


	char start2 = 'a';

	while (start2 <= 'f')
	{
		putchar(start2);
		start2++;
	}

	putchar('\n');
	return (0);
}