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
	unsigned int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] <= 57 && *argv[i] >= 48)
			{
				if (atoi(argv[i]) > 0)
					sum += atoi(argv[i]);
			}
			else if (*argv[i] > 57 || *argv[i] < 48)
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", sum);					}
	return (0);
}
