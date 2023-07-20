#include "main.h"
/**
 *main - Entry point
 *
 *Return: Always return 0
 */
int main(void)
{
	long int i, j;

	i = 612852475143;
	j = 2;

	while (j * j <= i)
	{
		if (i % j == 0)
			i /= j;
		else
			j++;
	}
	printf("%ld\n", i);
	return (0);
}
