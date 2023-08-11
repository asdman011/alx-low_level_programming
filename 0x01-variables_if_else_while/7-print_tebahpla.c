#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  char ch = 'z';
  while (ch >= 'a')
    {
      putchar(ch);
        ch--;
    }
  putchar('\n');
  return (0);
}
