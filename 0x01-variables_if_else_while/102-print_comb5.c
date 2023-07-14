#include <stdio.h>
/**
 * main - Entry point
 * putchar: output
 * Return: Always (0)
 */
int main(void)
{
int a, b, c, d;
 
for (a = 0; a <= 9; a++)
for (b = 0; b < 9; b++)
for (c = 0; c <= 9; c++)
for (d = 0; d <= 9; d++)
{
  if (!(d <= b)){
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
if ( a == 9 && b == 8 && c == 9 && d == 9)
break;
putchar(',');
putchar(' ');
    }}
putchar('\n');
return (0);
}
