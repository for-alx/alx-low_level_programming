#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: pointer destination
* @src: pointer source
* @n: bytes number
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)//5
	;
	
	for (i = 0; i < n && src[i] != '\n'; i++)
	{
		dest[j + i] = src[i];
	}

	//dest[j + i] = '\0';

	return (dest);
}
