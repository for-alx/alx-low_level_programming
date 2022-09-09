#include <stdio.h>
/**
 * main - main block
 * Description:  Generate lowercase and UPPERCASE letters
 * and then in uppercase, followed by a new line.
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

	start = 'A';

	while (start <= 'Z')
	{
		putchar(start);
		start++;
	}

	putchar('\n');
	return (0);
}
