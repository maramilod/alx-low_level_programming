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
		printf("Er4ror\n");
		exit(98);
	}

	if (*c != '+' && *c != '-' && *c != '*' && *c != '/' && *c != '%')
	{
		printf("E5rror\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (*c == '%' || *c == '/'))
	{
		printf("Erro6r\n");
		exit(100);
	}
	printf("%s\n", c);
	p = get_op_func(c);
	res = p(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
