#include "main.h"
/*
 * _strcat - A function that concatenates two Strings.
 *
 * @src: pointer to source input
 * @dest: pointer to destination input
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src);
{
  int len1 = 0, len2 = 0;
  while (src[len1] != NULL)
    {
      len1++;
    }
  while (dest[len1] != NULL)
    {
      len2++;
    }

  char *result = malloc(len1 + len2 + 1);

  int i = 0;
  while (src[i] != '\0')
    {
      result[i] = s1[i];
      i++;
    }
  int j = 0;
  while (dest[j] != NULL)
    {
      result[i] = dest[j];
      i++;
      j++;
    }
  result[i] = NULL;
  return (result);
}
