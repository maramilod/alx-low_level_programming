#include "3-calc.h"
/**
 * main - entry point
 * @argc: int
 * @argv: char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int);
	char *c;
	int res;

	c = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!c[2] || (*c != '+' && *c != '-' && *c != '*' && *c != '/' && *c != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (*c == '%' || *c == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	p = get_op_func(c);
	res = p(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
