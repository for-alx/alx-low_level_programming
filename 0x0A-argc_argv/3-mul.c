#include <stdlib.h>
#include <stdio.h>
/**
* main - print the result of the multiplication
* @argc: command line argument size
* @argv: command line argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (0);
}
