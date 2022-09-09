#include <stdio.h>
/**
 * main - main block
 * Description: Print all letters in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		if (start != 'q' && start != 'e')
		{
			putchar(start);
		}
		start++;
	}

	putchar('\n');
	return (0);
}
