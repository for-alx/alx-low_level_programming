#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		putchar(start + 48);
	}

	putchar('\n');
	return (0);
}
