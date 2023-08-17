#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print
 * @format: types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sr, *s = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(list, double));
					break;
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 's':
					sr = va_arg(list, char*);
					if (!sr)
						sr = "(nil)";
					printf("%s", s);
					printf("%s", sr);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
