#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints numbers, followed by a new line
 *
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s =  va_arg(arg, char*);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg);
}
