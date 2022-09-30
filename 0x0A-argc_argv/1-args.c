#include <stdio.h>
/**
* main - prints the number of arguments passed into it
* @argc: command line argument size
* @argv: command line argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		(void)argv;
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
