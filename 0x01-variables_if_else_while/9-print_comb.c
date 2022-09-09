#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: All possible combinations of single-digit numbers.
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		putchar(48 + start);
		if (start != 9)
		{
			putchar(',');
			putchar(' ');
		}
		start++;
	}
	putchar('\n');
	return (0);
}
