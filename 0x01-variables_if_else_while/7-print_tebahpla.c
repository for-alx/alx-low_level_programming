#include <stdio.h>
/**
 * main - main block
 * Description: reverse list of letters
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{

	char start = 'z';

	while(start >= 'a')
	{
        putchar(start);
        start--;
	}

	putchar('\n');
	return 0;
}
