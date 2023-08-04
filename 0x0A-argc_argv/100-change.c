#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: int
 * @argv: pointer
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int cen, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cen = atoi(argv[1]);
	if (cen < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cen > 0)
	{
		coins++;
		if ((cen - 25) >= 0)
			cen -= 25;
		else if ((cen - 10) >= 0)
			cen -= 10;
		else if ((cen - 5) >= 0)
			cen -= 5;
		else if ((cen - 2) >= 0)
			cen -= 2;
		else
			cen--;
	}
		printf("%d\n", coins);
		return (0);
}
