#include "main.h"
/**
 * puts2 - function that prints every
 * other charcter
 *
 * @str: pointer
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != 0)
		i++;
	i--;
	while (i >= 0)
	{
		printf("%c", str[j]);
		i -= 2;
		j += 2;
	}
	printf("\n");
}
