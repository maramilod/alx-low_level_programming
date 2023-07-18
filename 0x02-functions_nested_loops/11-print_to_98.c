#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts
 * separted by comma followed by space 
 * and number printed in order
 *
 * @n : input
 *
 * _putchar: output
 *
 * Return : always 0
 */
void print_to_98(int n)
{
int count;
if (n <= 98)
{
for (count = n; count <=  98; count++)
{
if (count == 98)
{
printf("%d", count);
printf("\n");
break;
}
else
{
printf("%d, ", count);
}
}
}
else
{
for (count = n; count >= 98; count--)
{
if (count == 98)
{
printf("%d", count);
printf("\n");
break;
}
else
{
printf("%d, ", count);
}
}
}}
