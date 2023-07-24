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
	int i;

	srand(time(0));
	i = rand();
	printf("%d", i);
	return (0);
}
