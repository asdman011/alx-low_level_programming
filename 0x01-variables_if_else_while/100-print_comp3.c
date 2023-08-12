#include <stdio.h>

/**                                                                                                    
 * main -a program that prints all possible combinations of single-digit numbers.                     
 * followed by a new line, using putchar                                                              
 *                                                                                                    
 * Return: Always 0 (Success)                                                                         
 */
int main(void)
{
  int digit1 = '0', digit2;
  while (digit1 <= '9')
    {
      digit2 = 0;
      while (digit2 <= 9)
        {
          if (digit1 != digit2 && digit1 < digit2) /*01 and 10 are considered the same combination of the two digits 0 and 1*/
            {
              putchar(digit1 + 48);
              putchar(digit2 + 48);
		if (digit1 + digit2 != 17)
		  {
		      putchar(',');
                      putchar(' ');
	          }
	      }
	  digit2++;
        }

      digit1++;
    }
  putchar('\n');
  return (0);
}
