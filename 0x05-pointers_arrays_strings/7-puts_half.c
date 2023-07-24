#include "main.h"

/**
 * puts_half - function print the
 * second half
 *
 * @str: pointer
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != 0)
		i++;
	i--;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	while (i >= j)
	{
		++j;
		printf("%c", str[j]);
	}
	printf("\n");
}
