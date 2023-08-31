#include "main.h"
/**
 * _putchar - function
 * @c: char
 * Return: the returns of write 1
 * on succes or -1 as an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
