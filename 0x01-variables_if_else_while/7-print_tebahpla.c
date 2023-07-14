#include <stdio.h>
/**
 * main - entry point
 * putchar: output
 * Return: Always (0)
 */
int main(void)
{
char rev;
for (rev = 'z'; rev >= 'a'; rev--)
putchar(rev);
putchar('\n');
return (0);
}
