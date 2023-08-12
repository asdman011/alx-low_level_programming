#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  
  char ch = 'a', ch1 = 'A';
  while (ch <= 'z')
    {
      putchar(ch);
        ch++;
    }
  while (ch1 <= 'Z')
    {
      putchar(ch1);
        ch1++;
    }
  putchar('\n');
  return (0);
}
