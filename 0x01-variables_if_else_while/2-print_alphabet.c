#include <stdio.h>
/**
 * main - Entry point
 * putchar: output
 *Return: Always (0)
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
