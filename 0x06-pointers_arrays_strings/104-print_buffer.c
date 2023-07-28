#include "main.h"
#include <stdio.h>

/**
 *print_buffer - function
 *@b: buffer
 *@size: value
 *Return: 0
 */

void print_buffer(char *b, int size)
{
	int o, i, j;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int d = *(b + o + i);

			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		o += 10;
	}
}
