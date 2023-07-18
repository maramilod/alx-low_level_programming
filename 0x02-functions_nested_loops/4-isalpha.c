#include "main.h"
/**
 *4-isalpha.c - Shows 1 if c is a letter, lowercase or uppercase
 *shows 0 otherwise
 *
 *@c: the charcter in ACII code
 *
 *Return: Returns 1 if c is a letter, lowercase or uppercase
 *Returns 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c <= 90 && c >= 65))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
