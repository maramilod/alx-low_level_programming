#include <stdio.h>
/**
 * main - entry point
 * putchar: output
 * Return: Always (0)
 */
int main(void)
{
int x, y, z;
for (x = 0; x < 8; x++)
{
for (y = 1; y < 9; y++)
for (z = 2; z <= 9; z++)
if (!(x >= y || x >= z || y >= z))
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
if (x != 7)
{
putchar(',');
putchar(' ');
}}}
putchar('\n');
return (0);
}
