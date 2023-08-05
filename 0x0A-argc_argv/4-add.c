#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry function
 * @argc: number
 * @argv: string
 * Return: Always 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c; c++)
		{
			if (*c <= 57 && *c >= 48)
			{
				if (atoi(argv[i]) > 0)
					sum += atoi(argv[i]);
			}
			else if (*c > 57 || *c < 48)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
