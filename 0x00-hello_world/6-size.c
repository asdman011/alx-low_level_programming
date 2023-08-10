#include <stdio.h>
/**
* main - entry point
*
* Describtion: prints the size of some data types for 32-bits and 64-bits
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %u  byte(s)", sizeof(char));
printf("Size of an int: %u byte(s)", sizeof(int));
printf("Size of a long int: %u byte(s)", sizeof(long int));
printf("Size of a long long: %u byte(s)", sizeof(long long));
printf("Size of a float: %u byte(s)", sizeof(float));
return (0);
}
