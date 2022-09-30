#include <stdio.h>
/**
* main - prints all arguments it receives
* @argc: command line argument size
* @argv: command line argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		int i;

		for (int i = 0; i < argc; ++i)
		{
			printf("%s\n", argv[i]);
		}
	}
	return(0);
}
