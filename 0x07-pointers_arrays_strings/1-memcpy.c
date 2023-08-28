#include "main.h"
#include <stdio.h>

/**
* _memcpy - function that copies memory to area
* @dest: type char pointer
* @src: type char memory area
* @n: type char bytes from src to dest
* Return: dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}

	return (dest);
}
