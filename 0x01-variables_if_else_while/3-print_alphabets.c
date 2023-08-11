#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  
  char ch = 'a', ch1 = 'b';
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
