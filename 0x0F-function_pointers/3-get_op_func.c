#include "3-calc.h"
/**
 * get_op_func - weirdo func
 * the returned function pointer can be used
 * @s: argv[3]
 * int 1
 * int 2i
 *
 * Return: function pointer based on the provided operator string
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
