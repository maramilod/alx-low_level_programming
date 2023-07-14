#include <stdio.h>
/**
 * main - entry point
 * putchar: output
 * Return: Always (0)
 */
int main(void)
{
char alpha; 
for (alpha = 'a'; alpha <= 'z'; alpha++){
if (alpha != 'q' && alpha != 'e')
putchar(alpha);
}
putchar('\n');
return (0);
}
