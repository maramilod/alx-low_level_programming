#include  "function_pointers.h"
/**
 * print_name - function
 * @name: name that i wanna print
 * @f: point to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
