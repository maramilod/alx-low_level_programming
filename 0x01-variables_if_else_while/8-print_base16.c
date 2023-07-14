#include <stdio.h>
/**
* main - entry point
* putchar: output
* Return: Always (0)
*/
int main(void)
{
int num;
for (num = 0; num < 16; num++)
if (num <= 9)
putchar(num + '0');
else
putchar(num - 10 + 'a');
putchar('\n');
return (0);
}
