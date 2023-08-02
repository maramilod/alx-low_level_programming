#include "main.h"
/**
 * is_palindrome -  function that returns 1 if a string
 * is a palindrome and 0 if not
 * pal - function to find
 * length - function
 * description: plz work
 * @s: pointer
 * Return: result
 */
int is_palindrome(char *s)
{
	int last = length(s);

	return (pal(s, 0, last - 1, last % 2));
			}
/**
 * length - function
 * @s: pointer
 * Return: result
 */
int length(char *s)
{
	int i = 0;

	if (*s)
		i += length(s + 1) + 1;
	return (i);
			}
/**
 *  pal - function to find
 *  @s: pointer
 *  @b: beginning
 *  @e: end
 *  @m: odd or even
 *  Return: result
 */
int pal(char *s, int b, int e, int m)
{
	if ((b == e && m  % 2 != 0) || (b == e + 1 && m % 2 == 0))
		return (1);
	if (s[b] != s[e])
		return (0);
	else
		return (pal(s, b + 1, e - 1, m));
}
