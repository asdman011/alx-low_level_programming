#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: type char pointer
 * @b: type char pointer
 * @n: type char bytes of mem pointed by s with constant byte b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int y;

    for (y = 0; y < n; y++)
      {
	s[y] = b;
      }
  return (s);
}
