#include "main.h"
/**
 * _atoi - function convert a string
 *
 * Return: numbers
 * @s: pointer
 */

int _atoi(char *s)
{
	int i = 0;
	int number = 0;
	int gn = 1;

	do {
		if (s[i] == '-')
			gn *= -1;
		else if (s[i] >= 48 && s[i] <= 57)
			number = (number * 10) + (*s - 48);
		else if (number > 0)
			break;
	} while (*s++);

	return (number * gn);
}
