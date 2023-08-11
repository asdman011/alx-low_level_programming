#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int digit = 48;
  
  while (digit <= 102)
    {
      putchar(digit);
      if (digit == 57)
	digit += 39;
      digit++;
    }
  putchar('\n');
  return (0);
}
