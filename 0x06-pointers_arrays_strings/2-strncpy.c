#include <string.h>
#include "main.h"
/**
* _strc - concatenate two strings
* @dest: char string
* @src: char string
* Return: pointer to resulting string `dest`
*/

char *_strncpy(char *dest, char *src, int n)
{
  int i;
  for (i = 0 ; i < n && src[i] != '\0' ; i++)
    {
      dest[i] = src[i];
    }
  for ( ; i < n; i++)
    {
      dest[i] = '\0';
    }
  return (dest);
}
