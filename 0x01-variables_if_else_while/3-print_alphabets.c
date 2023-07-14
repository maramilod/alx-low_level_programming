#include <stdio.h>
/**
 * main - entry point
 * putchar: output
 * Return: Always (0)
 */
int main(void)
{
char lal, upl;
for (lal = 'a'; lal <= 'z'; lal++)
putchar(lal);
for (upl = 'A'; upl <= 'Z'; upl++)
putchar(upl);
putchar('\n');
return (0);
}
