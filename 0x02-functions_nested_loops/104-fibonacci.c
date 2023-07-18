#include "main.h"

/**
 * numLenght - return the Lenght of string
 *
 * @num: operand number
 *
 * Return: number of digits
 */
int numLenght(int num)
{
int length = 0;
if (!num)
	return (1);
while (num)
{
	num = num / 10;
	length += 1;
}
return (length);
}
/**
 * main - entry point
 *
 * Description: prints the first 98 fibonacci numbers
 * starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int count, ini;
unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f20 = 0, sum0 = 0;
for (count = 1; count <= 98; count++)
{
if (f10 > 0)
printf("%lu", f10);
ini = numLenght(mx) - 1 - numLenght(f1);
while (f10 > 0 && ini > 0)
{
printf("%d", 0);
ini--;
}
printf("%lu", f1);
sum = (f1 + f2) % mx;
sum0 = f10 + f20 + (f1 + f2) / mx;
f1 = f2;
f10 = f20;
f2 = sum;
f20 = sum0;
if (count != 98)
printf(", ");
else
printf("\n");
}
return (0);
}
