#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
 *
 * main - entry point
 * 
 * Return: Always (0)
 */
int main(void)
{
	int f;
	char i;

	srand(time(0));
	while (f <= 2645)
	{
		i = rand() % 128;
		f += i;
		putchar(i);
	}
	putchar(2772 - f);
	return (0);
}
