#include <stdio.h>

/**
 * main -a program that prints all possible combinations of single-digit numbers.
 * followed by a new line, using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n = '0';
  while (n <= '9')
    {
      putchar(n);
    }
  while (n <= '8')
    {
    putchar(',');
      putchar(' ');
	n++;
    }	
  putchar('\n');
  return (0);
}
